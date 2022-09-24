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
    int v,a,b,c;
    cin>>v>>a>>b>>c;

    if(a==b && b==c){
        if(v%(a+b+c)==0) cout<<"F"<<endl;
        if(v%(a+b+c)==1) cout<<"M"<<endl;
        if(v%(a+b+c)==2) cout<<"T"<<endl;
    }
    else{
        int x=v%(a+b+c);
        if(x<v){
            if((v-a)<0) cout<<"F"<<endl;
            else if((v-a-b)<0) cout<<"M"<<endl;
            else cout<<"T"<<endl;
        }
        else{
            if((x-a)<0) cout<<"F"<<endl;
            else if((x-a-b)<0) cout<<"M"<<endl;
            else cout<<"T"<<endl;
        }
    }
    return 0;
}