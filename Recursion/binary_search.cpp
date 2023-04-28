#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[],int st,int ed,int k){
    if(st==ed){
        if(arr[st]==k){
            return st;
        }
        else{
            return -1;
        }
    }
    int mid =(st+ed)/2;
    if(arr[mid]==k){
        return mid;
    }

    if(k<arr[mid]){
        return binary_search(arr,st,mid-1,k);
    }
    else{
        return binary_search(arr,mid+1,ed,k);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans = binary_search(arr,0,n-1,k);
    if(ans!=-1){
        cout<<"Found element at position "<<ans+1<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}