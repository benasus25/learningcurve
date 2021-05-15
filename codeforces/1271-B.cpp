#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<int> b(n); 
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        b[i]=a[i]-b[i];
    }
    sort(b.begin(),b.end(), greater<int>());
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(x>=b[i])
        {
            count++;
            x=x-b[i];
        }
        else if(x<b[i])
        {
            break;
        }
    }
    if(x>0&&count==n)
    {
        cout<<"-1"<<endl;
    }
    else{
    cout<<count;
    }
    }
}