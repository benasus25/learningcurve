#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x;
        cin>>n>>m>>x;
        if(x%n==0)
        {
            cout<<(n-1)*(x/n);
        }
        else
        {
            cout<<((x%n)-1)*m + ((x/n)+1);
        }    
    }
}