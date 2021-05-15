#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        if(b==0)
        {
            cout<<"YES\n";
        }
        else if(a<2*b+1)
        {
            cout<<"NO\n";
        }
        else
        {
            int p=0;
            for(int i=0;i<b;i++)
            {
                if(s[i]==s[a-1-i])
                {
                    p++;
                }
            }
            if(p==b)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}