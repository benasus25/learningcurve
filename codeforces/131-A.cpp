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
	string s;
	cin>>s;
	int n= s.length();
	int count =0;
	for(int i=1;i<n;i++)
	{
	if(s[i]>=65 && s[i]<=90)
	{
		count++;
	}
	}
	if(count>=n-1)
	{
	if(int(s[0])>96)
		{
			s[0]= char(int(s[0])-32);
		}
	else
	{
		s[0]= char(int(s[0])+32);
	}	
	for(int i=1;i<s.length();i++)
	{
			s[i]= char(int(s[i])+32);
	}
	}
	cout<<s;	
}