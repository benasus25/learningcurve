#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int partition(int a[], int l,int r)
{
    int pivot = a[r];
    int pIndex = l;
    for(int i=l;i<r-1;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex],a[r]);
   return pIndex;
}

void quicksort(int a[], int l, int r)
{
    if(l<r)
    {
        int pivot = partition(a,l,r);
        quicksort(a,l, pivot -1);
        quicksort(a, pivot +1, r);
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
	cout<<"Enter the size of the array\n";
	cin>>n;
	//int *a =(int*)malloc(n*sizeof(int));
	int *a = new int[n];
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    quicksort(a,0, n-1);
	display(a,n);
	delete []a;
	// free(a);
	return 0;
}
