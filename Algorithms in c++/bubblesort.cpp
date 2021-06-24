#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a=b;
	b=temp;
}
void bubblesortrec(int a[], int n)
{
	if(n==1);

    else{
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]<a[i])
            swap(a[i+1],a[i]);
	}
	bubblesortrec(a,n-1);
    }
}

void bubblesortit(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
	    int flag=0; //to ensure no traversal through already sorted arrays
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
                flag=1;
            }
		}
		if(flag==0)
            break;
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
	int *a = new int[n];
	cout<<"What are the elements of the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubblesortrec(a,n);
	display(a,n);
	//free(a);
	delete []a;
}
