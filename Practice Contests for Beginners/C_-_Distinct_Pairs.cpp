#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define BOOST           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))
#define all(v)          v.begin(), v.end()
#define uniqueArr(x)    x.erase(unique(all(x)),x.end())
#define For(i,j,k)      for(int i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;

int main(){
    BOOST;
    int a,b;
    cin>>a>>b;
    int arr[a], brr[a];
    takeArr(arr,0,a);
    takeArr(brr,0,b);
    vector<int> crr;
    int k=arr[0]+brr[0];
    crr.push_back(k);
    cout<<0<<" "<<0<<endl;
    For(i,0,a){
        For(j,0,b){
            if(crr.size()<=a+b-2){
                int x=arr[i]+brr[j];
                if(count(all(crr),x)==0){
                    crr.pb(x);
                    cout<<i<<" "<<j<<endl;
                }
            }
            else break;
        }
    }
    return 0;
}