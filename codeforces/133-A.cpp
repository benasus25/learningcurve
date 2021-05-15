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
	bool flag = true;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			cout<<"YES";
			flag = false;
			break;
		}
	}
	if(flag==true)
	{
		cout<<"NO";
	}
}