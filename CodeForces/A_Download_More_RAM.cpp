#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

int main(){
    BOOST;
    int tc;
    cin>>tc;
    for(int intc=0;intc<tc;intc++){
        int a,b;
        cin>>a>>b;
        int soft[a],rRam[a];
        for(int i=0;i<a;i++){
            cin>>soft[i];
        }
        for(int i=0;i<a;i++){
            cin>>rRam[i];
        }
        for(int i=0;i<a;i++){
            cout<<rRam[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<a;i++){
            cout<<soft[i]<<" ";
        }
        cout<<endl;
        /*for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(b<=soft[j]){
                    b+=rRam[j];
                }
                else{
                    break;
                }
            }
        }*/
        cout<<b<<endl;
    }
    return 0;
}
