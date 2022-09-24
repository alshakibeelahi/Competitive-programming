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
#define Rev(i, k, n) for (int(i) = (k - 1); (i) >= (n); (i)--)

const ll N = 1e4;
int brr[3000];

// int uniqPrime(int n)
// {
//     int ans = 0;
//     For(i, 0, N)
//     {
//         if (n <= primes[i])
//         {
//             if (n % primes[i] == 0)
//                 ans++;
//         }
//         else
//             return ans;
//     }
// }

int32_t main()
{
    Code By Elahi;
    vector<int> primes;
    vector<int> arr(N, 0);
    For(i, 2, N)
    {
        if (arr[i] == 0)
        {
            primes.push_back(i);
            for (ll j = i * i; j <= N; j += i)
            {
                // cout << i << " " << j << endl;
                arr[j] = 1;
            }
        }
    }
    int n = primes.size();
    For(i, 0, 3000)
    {
        int div = 0;
        For(j, 0, primes.size())
        {
            if (i == primes[j])
                brr[i] = -1;
            if (primes[j] != i)
            {
                if (i % primes[j] == 0)
                    div += 1;
            }
        }
        if (div == 2)
            brr[i] = 1;
    }
    int aa, ans = 0;
    cin >> aa;
    for (int i = 6; i <= aa; i++)
    {
        if (brr[i] == 1)
            ans++;
    }
    cout << ans << endl;
}
