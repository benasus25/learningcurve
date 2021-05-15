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
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		a[p-1]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	delete []a;
}