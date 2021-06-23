#include<bits/stdc++.h>
using namespace std;

int linearsearch(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
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
    // display(a,n);
    int result = linearsearch(a,n,x);
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
