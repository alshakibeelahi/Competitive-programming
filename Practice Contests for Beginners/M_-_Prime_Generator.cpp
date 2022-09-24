#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Elahi cout.tie(NULL)
#define ll long long int
#define yes printf("YES\n")
#define no printf("NO\n")
#define mem(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define uniqVec(x) \
    sort(all(x));  \
    x.erase(unique(all(x)), x.end())
#define For(i, j, k) for (int i = j; i < k; i++)
#define Rev(i, k, n) for (int(i) = (k - 1); (i) >= (n); (i)--)

const int N = 1e5;
vector<int> primes;
vector<bool> is_prime(N + 1, true);

void solve()
{
    int n, m;
    cin >> m >> n;
    vector<int> segment(n - m + 1, 0);
    for (auto p : primes)
    {
        if ((p * p) > n)
        {
            break;
        }

        int start = (m / p) * p;
        if (p >= m && p <= n)
        {
            start = 2 * p;
        }
        // start marking the number as not prime
        for (int j = start; j <= n; j = j + p)
        {
            if (j < m)
            {
                continue;
            }
            segment[j - m] = 1;
        }
    }
    // all the primes stored as 0
    for (int i = m; i <= n; i++)
    {
        if (segment[i - m] == 0 && i != 1)
        {
            cout << i << endl;
        }
    }
    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Code/CP/input.txt", "r", stdin);
    freopen("D:/Code/CP/ioutput.txt", "w", stdout);
#endif
    Code By Elahi;
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i] && i * i <= N)
        {
            for (ll j = i * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }
    ll t;
    cin >> t;
    For(i, 0, t)
    {
        solve();
    }
    // solve();
    return 0;
}