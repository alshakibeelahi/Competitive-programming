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

struct segmenttree {
	int n;
	vector<int> st, lazy;

	void init(int _n) {
		this->n = _n;
		st.resize(4 * n, 0);
		lazy.resize(4 * n, 0);
	}

	void build(int start, int ending, int node, vector<int> &v) {
		// leaf node base case
		if (start == ending) {
			st[node] = v[start];
			return;
		}

		int mid = (start + ending) / 2;

		// left subtree is (start,mid)
		build(start, mid, 2 * node + 1, v);

		// right subtree is (mid+1,ending)
		build(mid + 1, ending, 2 * node + 2, v);

		st[node] = st[node * 2 + 1] + st[node * 2 + 2];
	}

	int query(int start, int ending, int l, int r, int node) {
		// non overlapping case
		if (start > r || ending < l) {
			return 0;
		}

		// lazy propagation / clear the lazy update
		if (lazy[node] != 0) {
			// pending updates
			// update the segment tree node
			st[node] += lazy[node] * (ending - start + 1);
			if (start != ending) {
				// propagate the updated value
				lazy[2 * node + 1] += lazy[node];
				lazy[2 * node + 2] += lazy[node];
			}
			lazy[node] = 0;
		}

		// complete overlap
		if (start >= l && ending <= r) {
			return st[node];
		}

		// partial case
		int mid = (start + ending) / 2;

		int q1 = query(start, mid, l, r, 2 * node + 1);
		int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

		return q1 + q2;
	}

	void update(int start, int ending, int node, int l, int r, int value) {
		// non overlapping case
		if (start > r || ending < l) {
			return ;
		}

		// lazy propagation / clear the lazy update
		if (lazy[node] != 0) {
			// pending updates
			// update the segment tree node
			st[node] += lazy[node] * (ending - start + 1);
			if (start != ending) {
				// propagate the updated value
				lazy[2 * node + 1] += lazy[node];
				lazy[2 * node + 2] += lazy[node];
			}
			lazy[node] = 0;
		}

		// complete overlap
		if (start >= l && ending <= r) {
			st[node] += value * (ending - start + 1);
			if (start != ending) {
				lazy[2 * node + 1] += value;
				lazy[2 * node + 2] += value;
			}
			return;
		}

		// partial case
		int mid = (start + ending) / 2;

		update(start, mid, 2 * node + 1, l, r, value);

		update(mid + 1, ending, 2 * node + 2, l, r, value);

		st[node] = st[node * 2 + 1] + st[node * 2 + 2];

		return;
	}

	void build(vector<int> &v) {
		build(0, n - 1, 0, v);
	}

	int query(int l, int r) {
		return query(0, n - 1, l, r, 0);
	}

	void update(int l, int r, int x) {
		update(0, n - 1, 0, l, r, x);
	}
};

void solve() {
    int n,m;
    cin>>n>>m;
}

int32_t main()
{
    Code By Elahi;
    clock_t z = clock();
    ll t=1;
    cin>>t;
    For(i,0,t)
    {
        solve();
    }
    // solve();
    // For(i,0,t)
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     solve();
    //     cout<<"\n";
    // }
    #ifndef ONLINE_JUDGE
        //cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    #endif
    return 0;
}