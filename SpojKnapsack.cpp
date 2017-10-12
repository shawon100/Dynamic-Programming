#include <bits/stdc++.h>
using namespace std;

long long int knapsack(long long int nn,long long int mm,long long int ncost[],long long int npoint[])
{
    long long int in,w;

    long long int dp[nn+1][mm+1];

    memset(dp,0,sizeof(dp));

    for(in=0;in<=nn;in++)
    {
        dp[in][0]=0;
    }
    for(w=0;w<=mm;w++)
    {
        dp[0][w]=0;
    }


    for(in=1;in<=nn;in++)
    {
        for(w=1;w<=mm;w++)
        {
            if(ncost[in]>w)
            {
                dp[in][w]=dp[in-1][w];
            }
            else
            {

                dp[in][w]=max(dp[in-1][w],npoint[in]+dp[in-1][w-ncost[in]]);
            }
        }
    }

    return dp[nn][mm];





}


int main()
{
        long long int i,j,k,l,t,n,m,co,po;
        long long int cost[2005],point[2005];


        cin>>m>>n;
        for(j=1;j<=n;j++)
        {
           cin>>cost[j]>>point[j];
        }
        cout<<knapsack(n,m,cost,point)<<endl;

}

