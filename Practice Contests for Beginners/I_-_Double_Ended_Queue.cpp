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
    int tc;
    cin>>tc;
    For(tt,0,tc){
        int n,m,x;
        deque<int> d(n);
        For(i,0,m){
            string s;
            cin>>s;
            if(s=="pushLeft"){
                if(d.size()<3){
                    cin>>x;
                    d.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else
                cout<<"The queue is full"<<endl;
            }
            else if(s=="pushRight"){
                if(d.size()<3){
                    cin>>x;
                    d.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
                else
                cout<<"The queue is full"<<endl;
            }
            else if(s=="popLeft"){
                if(d.size()!=0){
                    cout<<"Popped from left: "<<d.front()<<endl;
                    d.pop_front();
                }
                else
                cout<<"The queue is empty"<<endl;
            }
            else{
                if(d.size()!=0){
                    cout<<"Popped from right: "<<d.back()<<endl;
                    d.pop_back();
                }
                else
                cout<<"The queue is empty"<<endl;
            }
        }
    }
    return 0;
}