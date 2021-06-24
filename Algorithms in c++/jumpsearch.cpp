#include<bits/stdc++.h>
using namespace std;


int jumpSearch(int arr[], int x, int n)
{
    // Finding block size to be jumped
    int step = sqrt(n);
    // Finding the block where element is
    // present (if it is present)
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < x)
    {
        prev++;
 
        // If we reached next block or end of
        // array, element is not present.
        if (prev == min(step, n))
            return -1;
    }
    // If element is found
    if (arr[prev] == x)
        return prev;
 
    return -1;
}


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
	int * a = new int[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<"The searched number is at "<<jumpSearch(a,key,n)<<" index!\n";
}