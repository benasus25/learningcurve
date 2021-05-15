#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long int sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


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
		long double s = n/2;
		if(n%2==0)
		{
			if(isPerfectSquare(s)==true||isPerfectSquare(s/2)==true)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
		else
		{
			cout<<"NO\n";
		}
	}
}