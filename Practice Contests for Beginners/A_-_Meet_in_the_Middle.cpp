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
#define takeArr(x, o, n)        \
    for (int i = o; i < n; i++) \
    {                           \
        cin >> x[i];            \
    }
#define printArr(x, o, n)       \
    for (int i = o; i < n; i++) \
    {                           \
        cout << x[i] << " ";    \
    }                           \
    cout << endl;
#define show(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define pmap(a)      \
    for (auto x : a) \
    cout << x.first << " " << x.second << endl

template <typename Arg1> // show(parameters)
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << ": " << arg1 << " | ";
    __f(comma + 1, args...);
}
template <typename T> // cin >> vector(n)
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
template <typename T>
ll sumv(vector<T> v)
{
    ll n = v.size();
    ll s = 0;
    For(i, 0, n) s += v[i];
    return s;
}
bool srtByf(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool srtBys(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

vector<int> ans;
void subset(vector<int> output, int i, int n, int sum, int m)
{
    if (i == n)
    {
        if (sum == m)
            ans.pb(sum);
        return;
    }
    // including ith element
    subset(output, i + 1, n, sum + output[i], m);
    // excluding ith element
    subset(output, i + 1, n, sum, m);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    cin >> v;
    sort(all(v));
    subset(v, 0, n, 0, m);
    cout << ans.size() << endl;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Code/CP/input.txt", "r", stdin);
    freopen("D:/Code/CP/ioutput.txt", "w", stdout);
#endif
    Code By Elahi;
    solve();
    return 0;
}