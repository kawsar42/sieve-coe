#include<bits/stdc++.h>
#define ll long long int
#define kawsar ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
bool prime[80000001];
int n=80000000;
vector<ll>v;
void sieve()
{
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==false)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==false)v.push_back(i);
	}
}
int main()
{
    kawsar;
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
