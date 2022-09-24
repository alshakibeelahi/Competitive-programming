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
const int N=1e4+5;

int a[N],seg[4*N];

void build(int ind, int low, int high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build((2*ind)+1, low, mid);
    build((2*ind)+2,mid+1,high);
    seg[ind]=max(seg[(2*ind)+1],seg[(2*ind)+2]);
}

int findMaxInRange(int ind, int low, int high, int l, int r){
    if(low>=l && high<=r){
        return seg[ind];
    }
    if(high<l || low>r) return INT_MIN;
    int mid=(low+high)/2;
    int left=findMaxInRange((2*ind)+1, low, mid, l, r);
    int right=findMaxInRange((2*ind)+2, mid+1, high, l, r);
    return max(left,right); 
}

int main(){
    BOOST;
    int n;
    cin>>n;
    For(i,0,n){
        cin>>a[i];
    }
    build(0,0,n-1);
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<findMaxInRange(0,0,n-1,l,r)<<endl;
    }
    return 0;
}