#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
#define GCD(a, b)   __gcd(a, b)
#define LCM(a, b)   (a * b) / GCD(a, b)
#define mem(x,y)    memset(x,y,sizeof x )
#define for(i,j,k)  for(int i=j;i<=k;i++)
#define rev(i,j,k)  for(int i=j;i>=k;i--)

typedef long long int ll;

int main(){
    BOOST;
    int tc;
    cin>>tc;
    for(int intc=0;intc<tc;intc++){
        int n;
        cin>>n;
        int arr[n],brr[n],crr[n],drr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        for(int i=0;i<n;i++){
            crr[i]=min(arr[i],brr[i]);
            drr[i]=max(arr[i],brr[i]);
        }
        sort(crr,crr+n);
        sort(drr,drr+n);
        cout<<crr[n-1]*drr[n-1]<<endl;
    }
    return 0;
}
