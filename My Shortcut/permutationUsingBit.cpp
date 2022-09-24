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

template <typename Arg1>//show(parameters)
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){ const char* comma = strchr (names + 1, ',');cout.write (names, comma - names) << ": " << arg1 << " | "; __f (comma + 1, args...);}
template<typename T> // cin >> vector(n)
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template<typename T>
ll sumv(vector<T>v){ll n=v.size();ll s=0;For(i,0,n)s+=v[i];return s;}
bool srtByf(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool srtBys(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//permutation using bit manupulation
void permutation(vector<int> &v){
    int n=v.size();
    For(i,0,(1<<n)){
        For(j,0,n){
            if((i>>j)&1){
                cout<<v[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int num_of_divisors(vector<int> &primes, int n){
    int m=primes.size(), ans=0;
    for (int i = 1; i < (1 << m); i++) {
		int lcm = 1;
		for (int j = 0; j < m; j++) {
			// if jth bit of ith element is set then include it
			if ((i >> j) & 1) {
				// cout << primes[j] << " ";
				lcm *= primes[j];
			}
		}
		// cout << '\n';
		if (__builtin_popcount(i) % 2 == 0) {
			ans -= (n / lcm);
		}
		else {
			ans += (n / lcm);
		}
	}
    return ans;
}

int32_t main()
{
    Code By Elahi;
    int n,size;
    cin>>n>>size;
    vector<int> v(size);
    cin>>v;
    cout<<num_of_divisors(v,n)<<endl;
    return 0;
}

