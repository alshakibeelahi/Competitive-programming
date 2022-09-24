#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"Yes"<<endl
#define no          cout<<"No"<<endl
#define Gcd(a,b)    __gcd(a, b)
#define Lcm(a,b)    (a*b) / Gcd(a,b)
#define mem(a,b)    memset(a, b, sizeof(a))
#define all(v)      v.begin(), v.end()
#define For(i,j,k)  for(int i=j;i<k;i++)
#define Rev(i,k,n)  for(int (i)=(k-1);(i)>=(n);(i)--)
typedef long long int ll;

int main(){
    BOOST;
    int tc;
    cin>>tc;
    For(tt,0,tc){
        int n,ans=0;
        cin>>n;
        int arr[n];
        For(i,0,n){
            cin>>arr[i];
        }
        if(!is_sorted(arr,arr+n)){
            For(i,0,n){
                if((arr[i]+arr[i+1])%2==1){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    if(is_sorted(arr,arr+n)){
                        ans=1;
                        break;
                    }
                }
            }
        }
        if(is_sorted(arr,arr+n) || ans==1) yes;
        else no;
    }
    return 0;
}