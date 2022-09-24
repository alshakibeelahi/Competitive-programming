#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define Code            ios_base::sync_with_stdio(false);
#define By              cin.tie(NULL);
#define Elahi           cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))
#define all(v)          v.begin(), v.end()
#define priority        vector<int>, greater<int>
#define uniqVec(x)      sort(all(x));x.erase(unique(all(x)),x.end())
#define For(i,j,k)      for(int i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;
#define show(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define pmap(a)         for(auto x : a) cout << x.first << " " << x.second << endl

void solve() {
    string s = "atcoder";
    int n,m;
    cin>>n>>m;
    For(i,n-1,m){
        cout<<s[i];
    }
}

int32_t main()
{
    Code By Elahi;
    solve();
    return 0;
}