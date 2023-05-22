//Selection Sort by always selecting the minimum element in the array
#include <bits/stdc++.h>
using namespace std;

int minimum(int arr[], int st,int n){
    int min_ind = -1;
    int min = 1000;
    for(int i=st;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            min_ind = i;
        }
    }
    return min_ind;
}

void selectionSort(int arr[],int n){
    int i=0;
    while(i<n){
        int min_ind = minimum(arr,i,n);
        int temp = arr[min_ind];
        arr[min_ind] = arr[i];
        arr[i] = temp;
        i++;

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}