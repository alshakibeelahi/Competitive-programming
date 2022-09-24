#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
const int N=1e5+5;

bool vis[N];
vector<int> adj[N];

void dfs(int vertex){
    /*Take action on vertex after entering into the vertex*/
    //cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child: adj[vertex]){
        /*Take action on Child before entering into the child node*/
        if(vis[child]) continue;
        dfs(child);
        /*Take action on Child after existing the child node*/
        cout<<child<<" ";
    }
    /*Take action on vertex before existing the vertex*/
}

int main(){
    BOOST;
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int ct=0;
    for (int i = 1; i <= n; ++i)
    {
        //if(vis[i])
            //continue;
        dfs(i);
        //ct++;
    }
    //cout<<ct<<endl;
    return 0;
}
