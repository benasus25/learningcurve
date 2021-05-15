#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int len=0;
    vector<int>b(1,1);
    int t=0;
    int* a = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i+1]>a[i])
        {
            b[t]++;
        }
        else
        {
            t++;
            b.push_back(1);
        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}