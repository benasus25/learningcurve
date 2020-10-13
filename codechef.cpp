#include <iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int df[n];
        df[0]=0;
        for(i=1;i<n;i++)
        {
            df[i]=a[i]-a[i-1];
        }
        int count=1,min=1000,max=-1;
        for(i=1;i<n;i++)
        {
        if(df[i]<3)
        {
            count++;
        }
        else
        {
            if(max<count)
            max=count;
            if(min>count)
            min=count;
            count=1;
        }
        }
        if(max<count)
            max=count;
            if(min>count)
            min=count;
            count=1;
            
        printf("%d %d\n",min,max);
    }
}

