#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define BOOST           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define print(x)        cout<<x<<endl
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))
#define all(v)          v.begin(), v.end()
#define uniqueArr(x)    x.erase(unique(all(x)),x.end())
#define For(i,j,k)      for(int i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;

const int N = 1e5+10;
vector<int> g[N];
bool visited[N];
int depth[N], height[N];


void dfs(int vertex){
    //Just enter in the vertex
    //cout<<vertex<<endl;
    visited[vertex] = true;
    for(int child: g[vertex]){
        //cout<<"Parent: "<<vertex<<", Child: "<<child<<endl;
        if(visited[child]) continue;
        //Just enter in the child
        
        dfs(child);
        
        //Just completed the whole child traverse
    }
    cout<<vertex<<" ";
    //Just Just completed the whole vertex traverse
}

void dfsTree(int vertex, int parent){
    //Just enter in the vertex
    for(int child: g[vertex]){
        if(child == parent) continue;
        depth[child] = depth[vertex]+1;
        dfsTree(child, vertex);
        height[vertex] = max(height[vertex], height[child]+1);
        //Just completed the whole child traverse
    }
    //Just Just completed the whole vertex traverse
}

void bfs(int vertex){
    queue<int> q;
    q.push(vertex);
    visited[vertex] = true;

    while(!q.empty()){
        int f = q.front();
        cout<<f<<" ";
        q.pop();

        for(auto nbr: g[vertex]){
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
}

void solveGraph(){
    int n,m;
    cin>>n>>m;
    For(i,1,m){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int cnt=0;
    For(i,1,n){
        if(visited[i]) continue;
        else{
            bfs(i);
            cnt++;
        }
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
    // cout<<endl<<cnt<<endl;
}

int main(){
    solveGraph();
}