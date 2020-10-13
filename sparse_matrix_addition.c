#include<stdio.h>
#define SIZE 20

struct sparseMatrix
{
	int ncols, nrows, nz;
	int rows[SIZE];
	int cols[SIZE];
	int values[SIZE];

};

struct sparseMatrix add_matrix(struct sparseMatrix *A, struct sparseMatrix *B )
{

	struct sparseMatrix s;
	int i=0, j=0, k=0;
	while(i<A->nz && j<B->nz)
	{
		if(A->rows[i]<B->rows[j])
		{
			s.rows[k]=A->rows[i];
			s.cols[k]=A->cols[i];
			s.values[k]=A->values[i];
			i++;
			k++;
		}
		else if(A->rows[i]>B->rows[j])
		{
			s.rows[k]=B->rows[j];
			s.cols[k]=B->cols[j];
			s.values[k]=B->values[j];
			j++;
			k++;
		}
		else
		{
			if(A->cols[i]<B->cols[j])
			{
				s.rows[k]=A->rows[i];
				s.cols[k]=A->cols[i];
				s.values[k]=A->values[i];
				i++;
				k++;
			}
			else if(A->cols[i]>B->cols[j])
			{
				s.rows[k]=B->rows[j];
				s.cols[k]=B->cols[j];
				s.values[k]=B->values[j];
				j++;
				k++;
			}
			else
			{
				s.rows[k]=A->rows[i];
				s.cols[k]=A->cols[i];
				s.values[k]=A->values[i]+B->values[j];
				i++;
				j++;
				k++;
			}
		}


	}

	while(i<A->nz)
	{
		s.rows[k]=A->rows[i];
		s.cols[k]=A->cols[i];
		s.values[k]=A->values[i];
		i++;
		k++;

	}

	while(j<B->nz)
	{
		s.rows[k]=B->rows[j];
		s.cols[k]=B->cols[j];
		s.values[k]=B->values[j];
		j++;
		k++;

	}
	s.ncols=A->ncols;
	s.nrows=A->nrows;
	s.nz=k;



	return s;
}

void display(struct sparseMatrix *A)
{
	printf("\n===========\n");
	printf("Given Matrix: \n");
	int i,j,l=0;

	for(i=0; i<A->nrows; i++)
	{
		for(j=0; j<A->ncols; j++)
		{
			if(i==A->rows[l] && j==A->cols[l])
			{
				printf("%d ", A->values[l]);
				l++;

			}
			else
			{
				printf("%d ", 0);
			}
		}
		printf("\n");
	}
}

int main(void)
{
	struct sparseMatrix A,B;
	A.nrows=4;
	A.ncols=5;
	A.nz=6;
	B.nrows=4;
	B.ncols=5;
	B.nz=7;
	printf("Enter values for first sparse matrix\n");
	for(int i=0; i<A.nz; i++)
	{
		scanf("%d %d %d", &A.rows[i], &A.cols[i], &A.values[i]);
	}
	printf("Enter values for second sparse matrix\n");
	for(int i=0; i<B.nz; i++)
	{
		scanf("%d %d %d", &B.rows[i], &B.cols[i], &B.values[i]);
	}
	display(&A);
	display(&B);
	struct sparseMatrix s=add_matrix(&A, &B);

	display(&s);
}
