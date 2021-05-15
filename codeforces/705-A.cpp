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
    for (int i = 0; i < t; i++) {
        if (i % 2 == 0) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }
        if (i != t - 1) {
            cout << "that ";
        } else {
            cout << "it ";
        }
    }
}
