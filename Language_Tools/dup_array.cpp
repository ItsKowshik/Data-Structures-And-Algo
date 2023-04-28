#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        set<ll> s_arr;
        for(int i=0;i<n;i++){
            if(s_arr.find(arr[i])==s_arr.end()){
                s_arr.insert(arr[i]);
            }
            else{
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}