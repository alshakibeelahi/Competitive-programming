#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

int main(){
    BOOST;
    int a,b,c=0,q=0;
    cin>>a>>b;
    string s1[a],s2[b];
    for(int i=0;i<a;i++){
        cin>>s1[i];
    }
    for(int i=0;i<b;i++){
        cin>>s2[i];
    }
    for(int i=0;i<a;i++){
        int c=0;
        for (int j=0;j<b;j++)
        {
            if(s1[i]==s2[j]){
                c=1;
            }
        }
        if(c==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
