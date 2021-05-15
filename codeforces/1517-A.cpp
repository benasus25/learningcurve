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
		long long int a;
		int count =0;
		cin>>a;
		string s = to_string(a);
		int len = s.length();
		bool flag{true};
		for(int i=len-3;i>0;i--)
		{
		long long int p = ceil(2050*(pow(10,i-1))); 
		if(a%p==0)
		{
			count+= a/p;
			flag = false;
			break;
		}
		else
		{
			count+=a/p;
			a=a%p;		
		}
	}
	if(flag == true)
	{
		cout<<"-1\n";
	}
	else
	{
		cout<<count<<endl;
	}
	}
}