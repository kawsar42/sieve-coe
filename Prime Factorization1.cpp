#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void prime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            cout << i << "^" << cnt << " ,";
        }
    }
    if(n>1)
    {
    cout << n << "^"<< 1 << endl;
    }
    else cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
       prime(n);
    }
}
