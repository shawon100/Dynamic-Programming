#include<bits/stdc++.h>
using namespace std;

int coinchange(int S[], int m, int n )
{

    int table[n+1];
    memset(table, 0, sizeof(table));

    table[0] = 1;

    for(int i=0; i<m; i++)
    {

        for(int j=S[i]; j<=n; j++)
        {
             table[j] += table[j-S[i]];

        }

    }

    return table[n];
}

int main()
{
    int coin[] = {1,5,10,25,50};
    int m =5;
    int n;
    while(cin>>n)
    {
       cout<<coinchange(coin,m,n)<<endl;
    }

    return 0;
}
