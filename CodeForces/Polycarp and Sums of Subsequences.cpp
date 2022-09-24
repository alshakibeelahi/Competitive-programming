#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
int main(){
    BOOST;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> v;
        int x;
        for(int j=0;j<7;j++){
            cin>>x;
            v.pb(x);
        }
        if(v[0]+v[1]==v[2]){
            cout<<v[0]<<" "<<v[1]<<" "<<v[3]<<endl;
        }
        else{
            cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
        }
    }
    return 0;
}