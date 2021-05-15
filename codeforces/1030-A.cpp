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
	bool flag = false;
	while(t--)
	{
		int a;
		cin>>a;

		if(a==1)
		{
			cout<<"HARD";
			flag = true;
			break;
		}
	}
	if(flag == false)
	{
		cout<<"EASY";
	}
}