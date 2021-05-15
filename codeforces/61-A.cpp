#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int len =a.length();
    char *c= new char [len];
    for(int i=0;i<len;i++)
    {
        if(a[i]!=b[i])
        {
            c[i]='1';
        }
        else{
            c[i]='0';
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<c[i];
    }
    delete []c;
    return 0;
}