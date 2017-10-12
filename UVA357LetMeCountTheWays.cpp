#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll coinchange(ll s[], ll m, ll n )
{

    ll table[n+1],i,j;
    memset(table, 0, sizeof(table));

    table[0] = 1;

    for(i=0;i<m;i++)
    {

        for(j=s[i];j<=n;j++)
        {
             table[j]= table[j]+table[j-s[i]];

        }

    }

    return table[n];
}

int main()
{
    long long int coin[] = {1,5,10,25,50};
    long long int m =5;
    long long int n,x;
    //freopen("357.txt","r",stdin);
    //reopen("357out.txt","w",stdout);

    while(cin>>n)
    {
       x=coinchange(coin,m,n);
       if(x!=1)
       {
           cout<<"There are "<<x<<" ways to produce "<<n<<" cents change."<<endl;
       }
       else
       {
           cout<<"There is only "<<x<<" way to produce "<<n<<" cents change."<<endl;
       }

    }

    return 0;
}

