//Insertion sort
#include <bits/stdc++.h>
using namespace std;

void insertSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i;
        int k=i-1;
        while((arr[k]>key)&&(k>=0)){
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k]= temp;
            j=k;
            k = j-1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}