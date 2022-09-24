#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
#define Gcd(a,b)    __gcd(a, b)
#define Lcm(a,b)    (a*b) / Gcd(a,b)
#define mem(a,b)    memset(a, b, sizeof(a))
#define all(v)      v.begin(), v.end()
#define For(i,j,k)  for(int i=j;i<k;i++)
#define Rev(i,k,n)  for(int (i)=(k-1);(i)>=(n);(i)--)

typedef long long int ll;

int main(){
    BOOST;
    int r,c;
    cin>>r>>c;
    int arr[r][c],brr[c][r];
    For(i,0,r){
        For(j,0,c){
            cin>>arr[i][j];
        }
    }
    For(i,0,r){
        For(j,0,c){
            brr[j][i]=arr[i][j];
        }
    }
    For(i,0,c){
        For(j,0,r){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
