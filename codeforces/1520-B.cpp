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
	int sum=0;
	while(t--)
	{
		int n;
		cin>>n;
		int a = to_string(n).length();
		if(a==1)
		{
			sum =n;
		}
		if(a>1)
		{
			sum = 9*(a-1);
			int div = (int(ceil(pow(10,a-1))));
			int q = n/div;
			sum +=q-1;
			int c = n%div;
			int num =0;
			bool flag = true;
			for(int i=a-2;i>=0;i--)
			{

				div = (int(ceil(pow(10,i))));
				num = c/div;
				if(num<q)
				{
					flag = false;
					break;
				}
				c = c%div;
			}
			if (flag == true)
			{
				sum +=1;
			}
		}
		cout<<sum<<endl;
	}
}