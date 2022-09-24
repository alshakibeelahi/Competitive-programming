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
    int x;
    cin>>x;
    For(i,0,x){
        int n;
        cin>>n;
        vector<int> arr, brr;
        For(j,0,n){
            int ar;
            cin>>ar;
            arr.push_back(ar);
        }
        For(j,0,n){
            int ar;
            cin>>ar;
            brr.push_back(ar);
        }
        sort(all(arr));
        sort(all(brr));
        int a = 0, b=0;
        if(brr[0]==0){
            a = arr[0]-brr[0];
        
        b = arr[n-1]-brr[n-1];}

        if(arr[0]<brr[0]) no;
        if(a<=b && arr[0]>=brr[0]) yes;
        else no;
    }
}