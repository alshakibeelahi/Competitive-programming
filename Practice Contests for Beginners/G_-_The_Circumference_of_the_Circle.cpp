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
    double x1,x2,x3,y1,y2,y3;
    while(cin>>x1 && cin>>y1 && cin>>x2 && cin>>y2 && cin>>x3 && cin>>y3){
        double m1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        double m2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        cout<<2*3.1416*((m1+m2)/2)<<endl;
    }
    return 0;
}