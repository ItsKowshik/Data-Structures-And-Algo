//Bubble Sort
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                int temp = arr[i-1];
                arr[i-1] =arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
    bubblesort(arr,n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}