//Added the infamous merge sort
#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> arr, int left, int mid,int right){
    vector<int> temp;
    vector<int> left_arr;
    vector<int> right_arr;
    for(int i=left;i<=mid;i++){
        left_arr.push_back(arr[i]);
    }
    for(int i=mid+1;i<=right;i++){
        right_arr.push_back(arr[i]);
    }
    int i=0;
    int j=0;
    while((i<left_arr.size()) && (j<right_arr.size())){
        if(left_arr[i]<=right_arr[j]){
            temp.push_back(left_arr[i]);
            i++;
        }
        else{
            temp.push_back(right_arr[j]);
            j++;
        }
    }
    for(;i<left_arr.size();i++){
        temp.push_back(left_arr[i]);
    }
    for(;j<right_arr.size();j++){
        temp.push_back(right_arr[j]);
    }

    for(int k=0;k<temp.size();k++){
        arr[left+k]=temp[k];
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void mergesort_helper(vector<int> arr, int st, int ed){
    if(st == ed){
        return;
    }
    int mid = st + (ed-st)/2;
    mergesort_helper(arr,st,mid);
    mergesort_helper(arr,mid+1,ed);
    merge(arr,st,mid,ed);

}

void mergesort(vector<int> arr, int n){
    mergesort_helper(arr,0,n-1);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}