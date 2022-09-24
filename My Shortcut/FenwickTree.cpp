#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define Gcd(a,b)    __gcd(a, b)
#define Lcm(a,b)    (a*b) / Gcd(a,b)
#define mem(a,b)    memset(a, b, sizeof(a))
#define all(v)      v.begin(), v.end()
#define For(i,j,k)  for(int i=j;i<k;i++)
#define Rev(i,k,n)  for(int (i)=(k-1);(i)>=(n);(i)--)
typedef long long int ll;
const int N=1e5+5;

int fen[N];
void update(int i, int add){
    while(i<N)
    {
        fen[i]+=add;
        i+=(i&(-i));
    }
}
int sum(int i){
    int s=0;
    while (i>0)
    {
        s+=fen[i];
        i=i-(i&(-i));
    }
    return s;
}
int rangeSum(int l, int r){
    return sum(r)-sum(l-1);
}

int main(){
    BOOST;
    int tc;
    cin>>tc;
    For(tt,0,tc){
        //code
    }
    return 0;
}