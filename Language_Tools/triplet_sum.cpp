#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        sort(arr,arr+n);
        int count =0;
        for(int i=0;i<n;i++){
            int left = k-arr[i];
            int f = i+1;
            int b = n-1;
            while(f<b){
                if((arr[f]+arr[b])==left){
                    count++;
                    if(arr[b-1]==arr[b]){
                        b--;
                    }
                    else if(arr[f+1]==arr[f]){
                        f++;
                    }
                    else{
                        b--;
                        f++;
                    }
                }
                else if(arr[f]+arr[b]>left){
                    b--;
                }
                else if(arr[f]+arr[b]<left){
                    f++;
                }
                
            }
        }
        cout<<count<<endl;
    }
}