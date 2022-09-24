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

const int N = 1e9;
vector<bool> arr(N, false);
vector<int> primes = {2, 3, 5};
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Code/CP/input.txt", "r", stdin);
    freopen("D:/Code/CP/ioutput.txt", "w", stdout);
#endif
    For(i, 0, N)
    {
        ll n = 6 * i + 1;
        if (n > N)
            break;
        ll m = 6 * i + 5;
        if (n % 3 != 0 && n % 5 != 0 && n > 7)
            arr[n] = true;
        if (m % 3 != 0 && m % 5 != 0)
            arr[m] = true;
    }

    For(i, 0, N)
    {
        if (arr[i])
            primes.push_back(i);
    }
    for (int i = 0; i < 50; i++)
    {
        cout << primes[i] << endl;
    }
    return 0;
}