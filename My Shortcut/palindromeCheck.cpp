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
    int tc;
    cin>>tc;
    for (int itc = 0; itc < tc; itc++)
    {
        string s;
        cin>>s;
        cout<<func(0,s)<<endl;
    }
    return 0;
}
