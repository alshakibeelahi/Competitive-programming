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
#define For(i,j,k)      for(ll i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;

ll arr[2000000000];
ll cal(ll x){
    ll s=0;
    while(x!=0){
        s=s+x%10;
        x=x/10;
    }
    if(s/9==0) return s;
    else return cal(s);
}

int main(){
    BOOST;
    // ll x;
    // while(cin>>x){
    //     if(x==0) break;
    //     ll m=f(x);
    //     cout<<m<<endl;
    // }
    For(i,0,2000000000){
        arr[i]=cal(i);
    }
    ll m;
    cin>>m;
    cout<<arr[m]<<endl;
    return 0;
}