#include <bits/stdc++.h>
using namespace std;

void RotateArray(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        int k =arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=k;
    }
}


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
        int d;
        cin>>d;
        RotateArray(arr,n,d);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }

}