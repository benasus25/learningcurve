#include<iostream>
using namespace std;

int main()
{
	static int x,y;
	int a[3];
	int b[3];
    for (int i=0;i<3;i++)
    {
    	cin>>a[i];
    }
    for (int i=0;i<3;i++)
    {
    	cin>>b[i];
    }
    for (int i=0;i<3;i++)
    {
    	if(a[i]<b[i])
    	{
    		y++;
    	}
    	else if(a[i]>b[i])
    	{
    		x++;
    	}
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}