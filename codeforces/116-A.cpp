#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum= sum+(b-a);
        if(sum>count)
        {
            count = sum;
        }
    }
    cout<<count;
}