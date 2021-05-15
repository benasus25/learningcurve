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
		int n,l,r;
		cin>>n>>l>>r;
		int sum1=0;
		int sum2=0;
		int cost =0;
		int idea1 =0;
		int idea2 =0;
		vector<vector<int>> countlr(n , vector<int> (2, 0));
		for(int i =0;i<n;i++)
		{
			int s;
			cin>>s;
			if(i<l)
			{
				countlr[s-1][0]++;
			}
			if(i>=l)
			{
				countlr[s-1][1]++;
			}
		}
		for(int i=0;i<n;i++)
		{
			countlr[i][0] = countlr[i][0]- countlr[i][1];
			countlr[i][1] = (countlr[i][0])*-1;
			if(countlr[i][0]<0)
			{
				countlr[i][0]=0;
			}
			if(countlr[i][1]<0)
			{
				countlr[i][1]=0;
			}
			sum1+=(countlr[i][0]);
			sum2+=(countlr[i][1]);
			if(countlr[i][0]%2!=0)
			{
				idea1++;
			}
			if(countlr[i][1]%2!=0)
			{
				idea2++;
			}
		}
		if(sum1==sum2)
		{
			cost+=sum1;
		}
		else if(sum1>sum2)
		{
			cost+=sum2;
			if(idea1>=sum2)
			{
				cost+=(idea1-sum2);
				cost+=(sum1-idea1)/2;
			}
			else
			{
				cost+=(sum1-sum2)/2;
			}
		}
		else
		{
			cost+=sum1;
			if(idea2>=sum1)
			{
				cost+=(idea2-sum1);
				cost+=(sum2-idea2)/2;
			}
			else
			{
				cost+=(sum2-sum1)/2;
			}
		}
	cout<<cost<<endl;
	}
}