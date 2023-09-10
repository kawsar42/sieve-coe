#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void sieve(ll n)
{
    ll prime[n+5];
    memset(prime,0,sizeof(prime));
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout << i << endl;
        }

    }

}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        sieve(n);
    }
    return 0;
}
