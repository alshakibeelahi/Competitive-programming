#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define Gcd(a,b)    __gcd(a, b)
#define Lcm(a,b)    (a*b) / Gcd(a,b)
#define mem(a,b)    memset(a, b, sizeof(a))
#define all(v)      v.begin(), v.end()
#define For(i,j,k)  for(int i=j;i<k;i++)
#define Rev(i,k,n)  for(int (i)=(k-1);(i)>=(n);(i)--)
typedef long long int ll;

const int N=1e3+2;
bool vis[N];
vector<int> adj[N];
void printVec(vector<int> &v){
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void dfs(int vertex){
    //cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child: adj[vertex]){
        if(vis[child])
            continue;
        dfs(child);
        cout<<child<<" ";
    }
}

int main(){
    BOOST;
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; ++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    //for weighted graph
    // int n,m;
    // cin>>n>>m;
    // vector<pair<int,int>> adj[n+1];
    // For(i,0,m){
    //     int u,v,wt;
    //     cin>>u>>v>>wt;
    //     adj[u].push_back({v,wt});
    //     adj[v].push_back({u,wt});
    // }
    for (int i = 0; i < n; ++i)
    {
        dfs(i);
    }
    return 0;
}