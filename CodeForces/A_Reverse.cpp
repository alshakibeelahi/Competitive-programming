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

int main(){
    BOOST;
    int tc;
    cin>>tc;
    For(tt,0,tc){
        int n,a=-1,b=-1;
        cin>>n;
        int arr[n];
        For(i,0,n){
            cin>>arr[i];
        }
        For(i,0,n){
            if(arr[i]!=i+1){
                a=i;
                cout<<a<<endl;
                break;
            }
        }
        if(a!=-1){
            For(i,0,n){
                if(arr[i]==a){
                    b=i;
                    break;
                }
            }
            reverse(arr+a,arr+b);
        }
        For(i,0,n){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}