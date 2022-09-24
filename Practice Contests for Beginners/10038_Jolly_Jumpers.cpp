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

int arr[3000];

int main(){
    BOOST;
    string s;
    while(getline(cin,s)){
    int a=count(all(s),'-');
    int b=count(all(s),' ');
    int n=s.length();
    int ans=0;
    if(a!=0) ans=1;
    else {
        for (int i = 0; i < n-1; i++)
        {
            int x,y;
            if(s[i]=='0' && s[i-1]==' ' && s[i+1]==' '){
                ans=1;
                break;
            }
        }
    }
    if(ans==1) cout<<"Not jolly"<<endl;
    else cout<<"Jolly"<<endl;
    }
    return 0;
}