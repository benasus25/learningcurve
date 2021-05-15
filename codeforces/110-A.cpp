#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum =0;
    int len = s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            sum++;
        }
    }
    string t = to_string(sum);
    int size = t.length();
    int count =0;
    for(int i=0;i<size;i++)
    {
        if(t[i]=='4'||t[i]=='7')
        {
            count++;
        }
    }
    if(count==size)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}