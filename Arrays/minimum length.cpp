#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];    
        }
        int l =0;
        int r = n-1;
        while((a[l]==b[l]) &&(l<n)){
            l++;
        }
        while((a[r]==b[r]) &&(r>0)){
            r--;
        }
        cout<<r-l+1<<endl;
    }
}