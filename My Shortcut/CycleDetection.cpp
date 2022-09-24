#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define BOOST           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))
#define all(v)          v.begin(), v.end()
#define uniqueArr(x)    x.erase(unique(all(x)),x.end())
#define For(i,j,k)      for(int i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;
#define show(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define pvector(a)       for(auto x : a) cout << x << " "; cout << endl
#define pmap(a)      for(auto x : a) cout << x.first << " " << x.second << endl

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

const int N = 1e5+10;
vector<char> g[N];
bool visited[N];

void dfs(char vertex){
    //Just enter in the vertex
    //cout<<vertex<<endl;
    visited[vertex] = true;
    for(char child: g[vertex]){
        //cout<<"Parent: "<<vertex<<", Child: "<<child<<endl;
        if(visited[child]) continue;
        //Just enter in the child
        
        dfs(child);
        
        //Just completed the whole child traverse
    }
    //cout<<vertex<<" ";
    //Just Just completed the whole vertex traverse
}

int32_t main()
{
    BOOST;
    int n,m,q;
    cin>>n>>m>>q;
    For(i,1,q){
        char v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int cnt=0;
    for(char i='A';i<'A'+m;++i){
        if(visited[i]) continue;
        else{
            dfs(i);
            cnt++;
        }
    }
    cout<<endl<<cnt<<endl;
    return 0;
}