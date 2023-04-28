#include <bits/stdc++.h>

using namespace std;

int SumArray(int arr[], int st, int ed){
    if(st==ed){
        return arr[st];
    }
    return SumArray(arr,st,ed-1)+arr[ed];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SumArray(arr,0,n-1)<<endl;

}