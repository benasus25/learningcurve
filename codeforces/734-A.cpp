#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c1=0;
    int c2=0;
    while(n--)
    {
        char c;
        cin>>c;
        if(c=='A')
        {
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"Anton";
    }
    else if(c1<c2)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}