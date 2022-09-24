#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

int fibonassi(int n){
    if(n<=1) return n;
    return fibonassi(n-1)+fibonassi(n-2);
}

int main(){
    BOOST;
    int tc;
    cin>>tc;
    for(int intc=0;intc<tc;intc++){
        int n;
        cin>>n;
        cout<<fibonassi(n)<<endl;
    }
    return 0;
}
