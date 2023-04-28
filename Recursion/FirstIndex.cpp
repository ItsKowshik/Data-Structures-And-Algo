#include <bits/stdc++.h>

using namespace std;

int FirstIndex(int arr[],int st,int ed,int x){
    if(st==ed+1){
        return -1;
    }
    if(arr[st]==x){
        return st;
    }
    else{
        FirstIndex(arr,st+1,ed,x);
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
    cout<<FirstIndex(arr,0,n-1,x)<<endl;
    return 0;

}