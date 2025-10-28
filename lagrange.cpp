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
    ll n, target;
    cin >> n >> target;
    vector<ll> v1, v2;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (ll i = 1; i <= n; i++)
    {
        ll xx;
        cin >> xx;
        v2.push_back(xx);
    }
    float ans = 0, ans1, ans2;
    for (ll i = 0; i < n; i++)
    {
        ans1 = 1;
        ans2 = 1;
        for (ll j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            ans1 = ans1 * (target - v1[j]);
            ans2 = ans2 * (v1[i] - v1[j]);
        }
        ans = ans + (float)((ans1 / ans2) * v2[i]);
    }
    cout << ans << endl;
}