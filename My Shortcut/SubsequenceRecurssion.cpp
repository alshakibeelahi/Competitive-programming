#include<bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mp          make_pair

typedef long long int ll;

void subsequence(int in,vector<int> &v, int arr[],int n){
    if(in==n){
        for(auto it: v){
            cout<<it<<" ";
        }
        if(v.size()==0){
            cout<<"{ }";
        }
        cout<<endl;
        return;
    }
    //not take the element
    subsequence(in+1,v,arr,n);

    //take the element
    v.push_back(arr[in]);
    subsequence(in+1,v,arr,n);
    v.pop_back();
}

int main(){
    BOOST;
    int tc;
    cin>>tc;
    for(int intc=0;intc<tc;intc++){
        int n;
        cin>>n;
        int arr[n];
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        subsequence(0,v,arr,n);
    }
    return 0;
}
