#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

int main(){
    BOOST;
    int n,o;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<(4*n-1);i++){
        cin>>o;
        m[o]++;
    }
    for(auto &pt: m){
        if(pt.second!=4){
            cout<<pt.first<<endl;
        }
    }
    return 0;
}
