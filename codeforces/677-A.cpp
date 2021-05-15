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
	int n,h;
	cin>>n>>h;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a>h)
		{
			count+=2;
		}
		else
		{
			count++;
		}
	}
	cout<<count<<endl;
}