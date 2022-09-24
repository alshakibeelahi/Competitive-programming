#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define BOOST           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))
#define all(v)          v.begin(), v.end()
#define uniqueArr(x)    x.erase(unique(all(x)),x.end())
#define For(i,j,k)      for(int i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;
#define show(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define pvector(a)      for(auto x : a) cout << x << " "; cout << endl
#define pmap(a)         for(auto x : a) cout << x.first << " " << x.second << endl

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

void permute(int arr[], int i, int n){
    if(i==-1) return;
    For(i,0,n){
        cout<<arr[i]<<" ";
    }
    swap(arr[i],arr[i-1]);
    cout<<endl;
    permute(arr,i-1,n);
}

void solve() {
    int n;
    cin>>n;
    cout<<n<<endl;
    int arr[n], x=1;
    For(i,0,n){
        arr[i]=x++;
    }
    permute(arr,n-1,n);
}

int32_t main()
{
    BOOST;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}