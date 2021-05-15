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
		vector<vector<int>> sol;
		bool arr[n] ={false};
		int * a = new int [2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[a[i]-1]==false)
			{
			arr[a[i]-1]= true;
			vector<int>x(n,0);
			int q =0;
			for(int j=i;j<n;j++)
			{
				if(a[j]==a[i])
				{
					x[q]=a[j+n];
					q++;
				}
			}
			sol.push_back(x);
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<sol[i][j]<<" ";
			}
		}
		// for(int k=1;k<n+1;k++)
		// {
		// 	int sum =0;
		// 	for(int i =0;i<n;i++)
		// 	{
		// 		for(int j=0;j<(n-k+1);j=j+k)
		// 		{
		// 			sum += sol[i][j];
		// 		}
		// 	}
		// cout<<sum<<" ";
		// }
		// cout<<"\n";
		delete []a;
	}
}