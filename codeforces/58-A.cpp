#include<iostream>
using namespace std;

int main()
{
    string str;
    string s="hello";
    cin>>str;
    int j=0;
    int count =0;
    int len= str.size();
    for(int i=0;i<len;i++)
    {
        if(str[i]==s[j])
        {
            j++;
            count++;
        }
    }
    if(count==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}