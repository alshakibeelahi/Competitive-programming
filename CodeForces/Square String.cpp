#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    BOOST;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s,s1,s2;
        cin>>s;
        if(s.length()%2==0){
            int l1,l2;
            l1=s.length()/2;
            l2=s1.length();
            s1=s.substr(0,l1);
            s2=s.substr(l1,l2-1);
            if(s2==s1){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}