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
		int n,m,k;
		cin>>n>>m>>k;
		int max =0;
		int min =0;
		if(n>=m)
		{
			max = (m-1)*n+(n-1);
			min = (m-1) + (n-1)*m;
		}
		else
		{
			max = (n-1)*m+(m-1);
			min = (n-1) + (m-1)*n;
		}
		if(k<=max&&k>=min)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}