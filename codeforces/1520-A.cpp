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
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool flag = false;
		for(int i=1;i<n;i++)
		{
			if(s[i]!=s[i-1])
			{
				for(int j=0;j<=i-1;j++)
				{
					if(s[j]==s[i])
					{
						cout<<"NO\n";
						flag = true;
						break;
					}
				}
			}
			if(flag == true)
			{
				break;
			}
		}
		if(flag == false)
		{
			cout<<"YES\n";
		}
	}
}