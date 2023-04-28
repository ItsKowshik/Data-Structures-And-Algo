#include <bits/stdc++.h>

using namespace std;

bool checknum(int arr[], int st, int ed, int x){
    if(st==ed){
        if(arr[st]==x){
            return true;
        }
        else{
            return false;
        }
    }
    if(arr[ed]==x){
        return checknum(arr,st,ed-1,x) || true;
    }
    else{
        return checknum(arr,st,ed-1,x) || false;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<checknum(arr,0,n-1,x)<<endl;
    return 0;

}