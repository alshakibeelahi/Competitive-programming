#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

bool func(int num, string s){
    if(num>=s.length()) return true;
    if(s[num]!=s[s.length()-1-num]) return false;

    return func(num+1,s);
}
int main(){
    BOOST;
    int a,b,c,ans;
    cin>>a;
    b=((a%100)*10+(a/100));
    c=((b%100)*10+(b/100));
    cout<<a+b+c<<endl;
    return 0;
}
