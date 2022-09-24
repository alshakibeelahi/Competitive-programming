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

void solve()
{
    set<int> s;
    For(i, 0, 5)
    {
        int n;
        cin >> n;
        s.insert(n);
    }
    cout << s.size() << endl;
}

int32_t main()
{
    Code By Elahi;
    solve();
    return 0;
}