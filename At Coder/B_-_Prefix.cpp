#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Elahi cout.tie(NULL)
#define ll long long int
#define yes printf("Yes\n")
#define no printf("No\n")
#define mem(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define uniqVec(x) \
    sort(all(x));  \
    x.erase(unique(all(x)), x.end())
#define For(i, j, k) for (int i = j; i < k; i++)
#define Rev(i, k, n) for (int(i) = (k - 1); (i) >= (n); (i)--)

void solve()
{
    string p, s;
    cin >> p >> s;
    bool ans = false;
    for (int i = 0; i < p.size(); i++)
    {
        if (s[i] == p[i])
        {
            ans = true;
            // cout << s[i] << " " << p[i] << endl;
        }

        else
        {
            // cout << "#" << s[i] << " " << p[i] << endl;
            ans = false;
            break;
        }
    }
    if (ans)
        yes;
    else
        no;
}

int32_t main()
{
    Code By Elahi;
    solve();
    return 0;
}