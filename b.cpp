#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;

#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define f(i, a, b) for (ll i = a; i < b; i++)
#define PI 3.1415926535897932384626
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef map<ll, ll> mpll;
typedef map<int, int> mpii;
typedef map<string, ll> mpsl;
typedef multiset<int> si;
typedef multiset<ll> sl;
typedef multiset<string> ss;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    // your code goes here
    ll n;
    sl(n);
    ll a[n];
    f(i, 0, n) sl(a[i]);

    sort(a, a + n);
    ll ans = 1;
    f(i, 0, n - 1)
    {
        if (a[i] != a[i + 1])
            ans++;
    }
    pl(ans);
    return 0;
}
