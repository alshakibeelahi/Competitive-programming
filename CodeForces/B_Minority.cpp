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

int main(){
    BOOST;
    int tc;
    cin>>tc;
    For(tt,0,tc){
        string s;
        int a=0,b=0,l=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') a++;
            else b++;
            if(a!=b) l=min(a,b);
        }
        cout<<l<<endl;
    }
    return 0;
}