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
    string s;
    int i=1;
    while(cin>>s){
        if(s=="HELLO") cout<<"Case "<<i<<": ENGLISH"<<endl;
        else if(s=="HOLA") cout<<"Case "<<i<<": SPANISH"<<endl;
        else if(s=="HALLO") cout<<"Case "<<i<<": GERMAN"<<endl;
        else if(s=="BONJOUR") cout<<"Case "<<i<<": FRENCH"<<endl;
        else if(s=="CIAO") cout<<"Case "<<i<<": ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE") cout<<"Case "<<i<<": RUSSIAN"<<endl;
        else if(s=="#") break;
        else cout<<"Case "<<i<<": UNKNOWN"<<endl;
        i++;
    }
    return 0;
}