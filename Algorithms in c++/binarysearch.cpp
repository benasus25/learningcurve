#include<bits/stdc++.h>
using namespace std;


int binarysearchiterative(int a[], int n, int x)
{
    int low=0, high= n-1;
    while(low<=high)
    {
    int mid =low+(high-low)/2;
    if(x==a[mid])
        return mid;
    else if(x<a[mid])
        high = mid-1;
    else
        low = mid+1;
    }
    return -1;
}
int binarysearchrecursive(int a[], int l, int r, int x)
{
    if(l>r)
        return -1;
    int mid =l+(r-l)/2;
    if(x==a[mid])
        return mid;
    else if(x<a[mid])
        return binarysearchrecursive(a,l,mid-1,x);
    else
        return binarysearchrecursive(a,mid+1,r,x);
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
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
    int x,n;
    cout<<"What is the size of the array you want to search\n";
    cin>>n;
    int *a;
    a= new int[n];
    cout<<"What number do you wanna search?\n";
    cin>>x;
    cout<<"enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int result = binarysearchiterative(a,n,x);
   cout<<"this is searched itereatively\n";
    // int result= binarysearchrecursive(a,0,n-1,x);
    // cout<<"This is searched recursively\n";
    if(result==-1)
    {
        cout<<"Element isn't in the array\n";
    }
    else
    {
        cout<<"Element is at the position:"<<result+1;
    }


    delete []a;

return 0;
}

