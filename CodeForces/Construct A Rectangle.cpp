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
    for (int i = 0; i < n; ++i)
    {
        int a,b,c,d=0;
        cin>>a>>b>>c;
        if(a==b || a==c || b==c){
            if(a==b){
                if(c%2==0){
                    d=1;
                }
            }
            else if(a==c){
                if(b%2==0){
                    d=1;
                }
            }
            else{
                if(a%2==0){
                    d=1;
                }
            }

        }
        else{
            if(a>b && a>c){
                if(abs(a-b)==c){
                    d=1;
                }
            }
            else if(b>a && b>c){
                if(abs(b-a)==c){
                    d=1;
                }
            }
            else{
                if(abs(c-b)==a){
                    d=1;
                }
            }
        }
        if(d==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}