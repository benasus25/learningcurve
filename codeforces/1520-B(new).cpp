#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define dcout(x) cout<<fixed<<setprecision(10)<<x
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
#define fo(n) for(ll i = 0; i<n; i++)
#define forn(x,n) for(ll x = 0; x<n; x++)
#define fore(x,n,m) for(ll x=n;x<=m;x++)
#define rfor(x,n,m) for(ll x=n;x>=m;x--)

int gcd(int a, int b){if(b == 0) return a; else return gcd(b, a%b);}
void dv(vector<int>v){for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";}
void dvf(vector<int>v){for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";}
bool check_prime(int a){for(int i=sqrt(a); i>1; i--){if(a%i == 0) return false;} return true;}
int ctoil(char c){return (int)c - 97;} //ctoil = char to int lower
int ctoiu(char c){return (int)c - 65;} //ctiou = char to int upper
void dv2d(vector<vector<int>>v){
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
	#ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
	#endif
}