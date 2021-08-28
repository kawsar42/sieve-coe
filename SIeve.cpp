#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define M 1000000000
bitset<M>mark;
vector<ll>prime;
void sieve(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(mark[i]==false)
        {
            for(ll j=i+i;j<=n;j+=i)
            {
                mark[j]=true;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(mark[i]==false)
        {
          prime.push_back(i);
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    sieve(n);
    for(int i=0;i<prime.size();i++)
    {
        cout << prime[i] << " ";
    }
    cout << endl;

    return 0;
}
