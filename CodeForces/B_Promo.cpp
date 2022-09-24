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

int main(){
    BOOST;
    int n,m;
    cin>>n>>m;
    vector<int> v;
    For(i,0,n){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(all(v));
    For(i,0,m){
        int a,b;
        cin>>a>>b;
        vector<int>::iterator it1, it2;
        it1 = v.begin();
        it2 = v.begin()+a;
        v.erase(it1,it2);
        int x=0;
        x = std::accumulate(v.begin(), v.begin()+b, 0);
        cout<<x<<endl;
    }
    return 0;
}