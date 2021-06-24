#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a=b;
	b=temp;
}

void selectionsort(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		int  min= i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
                swap(a[min],a[j]);
		}
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
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif
	int n;
	cout<<"What is the size of the array\n";
	cin>>n;
	//int *a = (int*)malloc(n*sizeof(int));
	//cout<<"used malloc\n";
	int *a= new int[n];
	cout<<"What are the elements of the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selectionsort(a,n);
	display(a,n);
	//free(a);
	delete []a;
}