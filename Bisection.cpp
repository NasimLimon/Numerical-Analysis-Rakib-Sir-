//                                            IN THE NAME OF SUPREME & MERCIFUL GOD
//                                                Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    Limon();
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v1(n + 2);
    vector<vector<ll>> v2(m + 2);
    unordered_set<ll> s1;
    for (ll i = 1; i <= n; i++)
    {
        ll xx;
        cin >> xx;
        auto x = lower_bound(v1.begin(), v1.end(), xx);
        if (x == v1.end())
        {
            v1[i].push_back(xx);
        }
        else
        {
            v1[x - v1.begin()].push_back(xx);
        }
    }
    for (ll i = 1; i <= m; i++)
    {
        ll xxx;
        cin >> xxx;
        auto x = lower_bound(v1.begin(), v1.end(), xxx);
        if (x == v2.end())
        {
            v2[i].push_back(xxx);
        }
        else
        {
            v2[x - v1.begin()].push_back(xxx);
        }
    }
    for (ll i = 0; i < v1.size(); i++)
    {
        for(ll j=i)
    }
   
}
