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

const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];
int depth[N], height[N];
const ll p = 31, mod = 1e9 + 7;
vector<ll> v;

// Pattern matching hash function
ll poly_hash(string s)
{
	ll hash = 0;
	ll p_power = 1;

	for (ll i = 0; i < s.size(); i++)
	{
		hash += (s[i] - 'a' + 1) * p_power;
		p_power *= p;

		hash %= mod;
		p_power %= mod;
	}

	return hash;
}

ll powr(ll a, ll b)
{
	// (a^b)%mod
	ll res = 1;
	while (b)
	{
		if (b & 1)
			res *= a;
		b /= 2;
		a *= a;

		a %= mod;
		res %= mod;
	}
	return res;
}

ll inv(ll x)
{
	return powr(x, mod - 2);
}

// Pattern matching main fuction
void patternMatching(string text, string pattern)
{
	ll pat_hash = poly_hash(pattern);

	ll n = text.size(), m = pattern.size();

	ll text_hash = poly_hash(text.substr(0, m));

	if (pat_hash == text_hash)
	{
		v.pb(0);
	}

	for (ll i = 1; i + m <= n; i++)
	{
		// remove last character
		text_hash = (text_hash - (text[i - 1] - 'a' + 1) + mod) % mod;

		text_hash = (text_hash * inv(p)) % mod;

		text_hash = (text_hash + (text[i + m - 1] - 'a' + 1) * powr(p, m - 1)) % mod;

		// cout << pat_hash << " " << text_hash << '\n';

		if (text_hash == pat_hash)
		{
			v.pb(i);
		}
	}
}

// count number of set bits
int count_set_bit(int n)
{
	int amt = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		amt++;
	}
	return amt;
}

// Generate Subsets
void subset(char input[], vector<char> &output, int i, int n)
{
	if (i == n)
	{
		for (auto it : output)
		{
			cout << it << " ";
		}
		if (sizeof(output) == 0)
		{
			cout << "{ }";
		}
		cout << endl;
		return;
	}
	// including ith element
	subset(input, output, i + 1, n);
	output.pb(input[i]);
	// excluding ith element
	subset(input, output, i + 1, n);
	output.pop_back();
}

class Node
{
public:
	string name;
	list<string> nbrs;

	Node(string name)
	{
		this->name = name;
	}
};

class Graph
{
	// Hash map(String, Node)
	unordered_map<string, Node *> m;

public:
	Graph(vector<string> nodes)
	{
		for (auto node : nodes)
		{
			m[node] = new Node(node);
		}
	}

	void addEdge(string x, string y, bool undir = false)
	{
		m[x]->nbrs.push_back(y);
		if (undir)
		{
			m[y]->nbrs.push_back(x);
		}
	}
};

void dfs(int vertex)
{
	// Just enter in the vertex
	// cout<<vertex<<endl;
	visited[vertex] = true;
	for (int child : g[vertex])
	{
		// cout<<"Parent: "<<vertex<<", Child: "<<child<<endl;
		if (visited[child])
			continue;
		// Just enter in the child

		dfs(child);

		// Just completed the whole child traverse
	}
	cout << vertex << " ";
	// Just Just completed the whole vertex traverse
}

void dfsTree(int vertex, int parent)
{
	// Just enter in the vertex
	for (int child : g[vertex])
	{
		if (child == parent)
			continue;
		depth[child] = depth[vertex] + 1;
		dfsTree(child, vertex);
		height[vertex] = max(height[vertex], height[child] + 1);
		// Just completed the whole child traverse
	}
	// Just Just completed the whole vertex traverse
}
// dfsTree(1,0);
// cout<<"Depth: ";
// For(i,1,n+1){
//     cout<<depth[i]<<" ";
// }
// cout<<endl<<"Height: ";
// For(i,1,n+1){
//     cout<<height[i]<<" ";
// }

void bfs(int vertex)
{
	queue<int> q;
	q.push(vertex);
	visited[vertex] = true;

	while (!q.empty())
	{
		int f = q.front();
		cout << f << " ";
		q.pop();

		for (auto nbr : g[vertex])
		{
			if (!visited[nbr])
			{
				q.push(nbr);
				visited[nbr] = true;
			}
		}
	}
}
void solve()
{
	int n;
	cin >> n;
	cout << (n ^ 1) << endl;
}

int32_t main()
{
	Code By Elahi;
	ll t;
	cin >> t;
	For(i, 0, t)
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
	return 0;
}