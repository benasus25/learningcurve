#include<iostream>
#include<string>
using namespace std;
void swap(char &a,char &b)
{
    char temp = a;
    a=b;
    b= temp;
}
int main()
{
    string s,t;
    cin>>s>>t;
    int len= s.length();
    for(int i=0;i<(len/2);i++)
    {
        swap(s[i],s[len-1-i]);
    }
    if(s==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}