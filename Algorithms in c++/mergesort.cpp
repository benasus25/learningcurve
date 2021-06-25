#include<iostream>
using namespace std;

void merge(int a[],int l, int m, int r)
{
    int n1 = m +1 - l;
    int n2 = r -m;

    int left[n1], right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i]= a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]= a[m+j+1];
    }
    int i,j,k;
    i=j=0;
    k=l;

    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]= left[i];
            i++;
        }
        else
        {
            a[k]= right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]= right[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int l, int r)
{
    if(l<r)
    {
        int m= l +(r-l)/2;

        mergesort(a,l,m);
        mergesort(a,m+1,r);

        merge(a,l,m,r);
    }
}
void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
}

int main()
{
	int n;
	cout<<"What is the size of the array\n";
	cin>>n;
	//int *a = (int*)malloc(n*sizeof(int));
	int *a;
	a= new int[n];
	cout<<"What are the elements of the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	display(a,n);
	//free(a);
	delete []a;
}
