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

int cal(ll a){
    int c=1;
    do{
            if(a%2==1){
                a=3*a+1;
                c++;
            }
            else{
                a=a/2;
                c++;
            }
            //cout<<a<<" ";
        }while (a!=1);
        return c;
}

int main(){
    BOOST;
    ll a,x,y;
    while(cin>>x && cin>>y){
        ll m,n,o;
        if(x>y) {m=y;n=x;}
        else {m=x;n=y;}
        o=n-m;
        ll arr[o];
        For(i,0,o){
            arr[i]=cal(i);
        }
        For(i,0,o){
            cout<<arr[i];
        }
        //cout<<x<<" "<<y<<" "<<*max_element(arr,arr+o)<<endl;
    }
    return 0;
}