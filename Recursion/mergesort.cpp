#include <bits/stdc++.h>

using namespace std;

void merge(int arr[],int st,int mid,int ed){
    vector<int> temp;
    int i = st;
    int j = mid+1;
    while(i<=mid && j<=ed){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    for(;i<=mid;i++){
        temp.push_back(arr[i]);
    }
    for(;j<=ed;j++){
        temp.push_back(arr[j]);
    }
    int k=st;
    for(int i=0; i<temp.size(); i++){
        arr[k]=temp[i];
        k++;
    }
}

void mergesort(int arr[], int st,int ed){
    if(st>=ed){
        return;
    }
    else{
        int mid = (st+ed)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,ed);
        merge(arr,st,mid,ed);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}
