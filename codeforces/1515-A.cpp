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
		int n,x;
		cin>>n>>x;
		vector<int> sol(n,0);
		int sum =0;
		for(int i =0;i<n;i++)
		{
			cin>>sol[i];
			sum+=sol[i];
		}
		sort(sol.begin(),sol.end());
		if(sum==x)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES\n";
		sum =0;
		for(int i=0;i<n;i++)
		{
			if(sum+sol[i]==x)
			{
				if(i!=n-1)
				{
					cout<<sol[i+1]<<" "<<sol[i]<<" ";
					i++;
					sum += sol[i]+sol[i+1];
				}
			}
			else
			{
				cout<<sol[i]<<" ";
				sum+=sol[i];
			}
		}
		}
	cout<<endl;	
	}
}