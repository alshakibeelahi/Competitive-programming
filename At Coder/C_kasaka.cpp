#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
#define Gcd(a,b)    __gcd(a, b)
#define Lcm(a,b)    (a*b) / Gcd(a,b)
#define mem(a,b)    memset(a, b, sizeof(a))
#define all(v)      v.begin(), v.end()
#define For(i,j,k)  for(int i=j;i<k;i++)
#define Rev(i,k,n)  for(int (i)=(k-1);(i)>=(n);(i)--)

typedef long long int ll;

int main(){
    BOOST;
    string s,s1;
    cin>>s;
    int n=s.length(),ans=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(s[j]!=s[n-1-i]){
            j++;
            char s1=s[n-1-i];
            if(s1=='a'){
                j=j-1;
            }
            else{
                ans=1;
                break;
            }
        }
        else
        j++;
    }
    if(ans==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
