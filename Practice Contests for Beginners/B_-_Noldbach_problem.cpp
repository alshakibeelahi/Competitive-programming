#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Elahi cout.tie(NULL)
#define ll long long int
#define pb push_back
#define mp make_pair
#define yes printf("YES\n")
#define no printf("NO\n")
#define Gcd(a, b) __gcd(a, b)
#define Lcm(a, b) (a * b) / Gcd(a, b)
#define mem(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define priority vector<int>, greater<int>
#define uniqVec(x) \
    sort(all(x));  \
    x.erase(unique(all(x)), x.end())
#define For(i, j, k) for (int i = j; i < k; i++)
#define Rev(i, k, n) for (int(i) = (k - 1); (i) > (n); (i)--)

int32_t main()
{
    Code By Elahi;
    int aa, bb, ans = 0, done = 1;
    cin >> aa >> bb;
    vector<int> primes;
    vector<bool> arr(aa, true);
    For(i, 2, aa)
    {
        if (arr[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j <= aa; j += i)
            {
                arr[j] = false;
            }
        }
    }
    int n = primes.size();
    int temp = 0;

    For(i, 0, n)
    {
        temp = primes[i] + primes[i + 1] + 1;
        if (temp > aa)
        {
            if (ans >= bb)
            {
                yes;
                return 0;
            }
        }
        if (temp < aa && arr[temp])
            ans++;
    }
    no;
}
