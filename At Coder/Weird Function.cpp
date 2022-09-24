#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair


long long int f(long long int x){
    long long int x1;
    x1=x*x+2*x+3;
    return x1;
}

int main(){
    BOOST;
    long long int x;
    cin>>x;
    long long int x1,x2,x3,x4,x6,x5;
    x1=f(x);
    x2=x1+x;
    x3=f(x2);
    x4=f(x1);
    x6=x3+x4;
    x5=f(x6);
    cout<<x5<<endl;    
}