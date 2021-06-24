#include<iostream>
using namespace std;

void insertionsortrec(int a[], int n)
{
	if(n<=1)
		return;

	insertionsortrec(a,n-1);

	int last = a[n-1];
	int j= n-2;

	while(j>=0&&a[j]>last)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]= last;
}

void insertionsortit(int a[], int n)
{
	for(int i=1;i<n;i++)
	{
		int key = a[i];
		int j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]= a[j];
			j--;
		}
		a[j+1]=key; //Big issue, shouldn't it be j+1
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
	insertionsortrec(a,n);
	cout<<"Done by recursion";
	display(a,n);
	//free(a);
	delete []a;
}