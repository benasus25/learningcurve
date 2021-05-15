#include<bits/stdc++.h>
using namespace std;

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
		int n,m;
		cin>>n>>m;
		int i,j;
		int * arr = new int [m];
		vector<vector<int>> vect;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>vect[i][j];
			}
		}
		for(j=0;j<m;j++)
		{
			arr[j] = vect[i][j];
		}	
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			{
			sort(arr, arr + m);
			}
			else
			{
			sort(arr, arr + m, greater<int>());
			}
			for(j=0;j<m;j++)
			{
				if(j<(i/2))
				{
				vect[i][j] = arr[m-j];
				}
				else
				{
					vect[i][j-(i/2)] = arr[j];
				}
				cout<<vect[i][j];
			}
			cout<<endl;
		}
	delete []arr;
	}
}