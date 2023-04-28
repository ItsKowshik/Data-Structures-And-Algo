#include <bits/stdc++.h>

using namespace std;

int LastIndex(int arr[],int st,int ed,int x){
    if(ed==-1){
        return -1;
    }

    if(arr[ed]==x){
        return ed;
    }
    else{
        LastIndex(arr,st,ed-1,x);
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
    cout<<LastIndex(arr,0,n-1,x)<<endl;
    return 0;
}