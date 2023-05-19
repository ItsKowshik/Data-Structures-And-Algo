//Heap Sort using max heap
#include <bits/stdc++.h>
using namespace std;
int heap[10000];
int ans[10000];
int heap_size;

int right_child(int k){
    return 2*k+1;
}

int left_child(int k){
    return 2*k;
}

int parent(int k){
    if(k==0){
        return -1;
    }
    return k/2;
}

void bubble_up(int k){
    if(heap[parent(k)]==-1){
        return;
    }
    if(heap[parent(k)]<heap[k]){
        int temp = heap[k];
        heap[k] = heap[parent(k)];
        heap[parent(k)] = temp;
        bubble_up(parent(k));


    }
}

void make_heap(int arr[], int n){
    for(int i=0;i<n;i++){
        heap[i+1] = arr[i];
        heap_size++;
        bubble_up(i+1);
    }
}

void bubble_down(int k){
    int val = heap[k];
    int lc = heap[left_child(k)];
    int rc = heap[right_child(k)];
    int max = k;
    if(left_child(k)<=heap_size){
        if((lc>val)&&(lc>rc)){
            max = left_child(k);
        }
        else if((rc>val)&&(rc>lc)){
            max = right_child(k);
        }
    }
    if(max!=k){
        int temp = heap[k];
        heap[k] = heap[max];
        heap[max] = temp;
        bubble_down(max);
    }
}
void heapsort(int arr[],int n){
    make_heap(arr,n);
    for(int i=n-1;i>=0;i--){
        ans[i] = heap[1];
        heap[1]=heap[heap_size];
        heap_size--;
        bubble_down(1);

    }
}

int main(){
    heap[0] = -1;
    heap_size = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    heapsort(arr,n);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}