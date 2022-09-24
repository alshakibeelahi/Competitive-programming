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

ll game(ll hc,ll dm){
    if(hc%dm==0) return hc/dm;
    else return (hc/dm)+1;
}

int main(){
    BOOST;
    int tc;
    cin>>tc;
    For(tt,0,tc){
        ll hc,dc,hm,dm,c,d,h;
        cin>>hc>>dc>>hm>>dm>>c>>d>>h;
        ll nhc,ndc,kHero,kMons,ans=0;
        
        for(ll i=0;i<=c;i++){
            nhc = hc+h*i;
            ndc = dc+d*(c-i);
            kHero=game(nhc,dm)+1;
            kMons=game(hm,ndc);
            if(kHero>kMons){
                ans=1;
                break;
            }
        }
        if(ans==1) yes;
        else no;
    }
    return 0;
}