#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        double p,a,b,c;
        cin>>p>>a>>b>>c;
        long int m,n,o;
        m = ((ceil(p/a))*a)-p;
        n = ((ceil(p/b))*b)-p;
        o = ((ceil(p/c))*c)-p;

        if(m<=n && m<=o)
        {
            cout<<m<<endl;
        }
        else if(n<=m && n <=o)
        {
            cout<<n<<endl;
        }
        else if(o<=m && o<=n)
        {
            cout<<o<<endl;
        }
    }
}