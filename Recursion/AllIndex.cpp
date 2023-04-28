#include <bits/stdc++.h>

using namespace std;

void AllIndex(int arr[],int st,int ed,int x,int out[]){
    if(st==ed+1){
        return;
    }
    if(arr[st]==x){
        out[st]=1;
    }
    return AllIndex(arr,st+1,ed,x,out);

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
    int out[n];
    AllIndex(arr,0,n-1,x,out);
    for(int i=0;i<n;i++){
        if(out[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;


}