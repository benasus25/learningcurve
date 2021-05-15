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
		int n,m,x;
		cin>>n>>m>>x;
		bool arr[n] ={true};
		int *a = new int [n];
		vector<int> sol(n,0);
		for(int i =0;i<n;i++)
		{
			a[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			cin>>sol[i];
		}
		for(int i=0;i<n;i++)
		{
			int max = sol[0];
			for(int j=0;j<n;j++)
			{
				if(sol[j]>max)
				{
					q =j;
					max =sol[j];
				}
			} 
			a[max] = i+1;
			sol[q]=0;
		}
	}
}