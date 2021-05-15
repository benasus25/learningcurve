#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    int len =s.length();
    for(int i=0;i<len;i++)
    {
        if(isupper(s[i]))
        {
            c1++;
        }
        if(islower(s[i]))
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        for(int i=0;i<len;i++)
        {
            s[i]=(toupper(s[i]));
        }
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            s[i]=(tolower(s[i]));
        }
    }
    cout<<s;
}