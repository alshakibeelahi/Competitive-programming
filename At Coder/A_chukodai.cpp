#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

int main(){
    BOOST;
    int a,b;
    string s;
    cin>>s;
    cin>>a>>b;
    for(int i=0;i<s.length();i++){
        if(i==(a-1)){
            cout<<s[b-1];
        }
        else if(i==(b-1)){
            cout<<s[a-1];
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}
