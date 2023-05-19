//Heap Sort by using min heap

#include <bits/stdc++.h>

using namespace std;

int heap[100];
int ans[100];
int heap_size = 0;

int parent(int k){
    if(k==0){
        return -1;
    }
    return k/2;
}

int left_child(int k){
    return 2*k;
}

int right_child(int k){
    return 2*k+1;
}
void bubble_up(int k){
    if(heap[parent(k)]==-1){
        return;
    }
    if(heap[parent(k)]>heap[k]){
        int temp = heap[k];
        heap[k] = heap[parent(k)];
        heap[parent(k)] = temp;
        bubble_up(parent(k));
    }
}

void make_heap(int n){
    for(int i=0; i<n; i++){
        heap[i+1] = ans[i];
        heap_size++;
        bubble_up(i+1);
    }
    
}

void bubble_down(int k, int n){
    int val = heap[k];
    int l = left_child(k);
    int r = right_child(k);
    int min = k;
    if(l<=heap_size){
        if((heap[l]<heap[k]) && (heap[l]<heap[r])){
            min = l;
        }
        else if((heap[r]<heap[k]) && (heap[r]<heap[l])){
            min = r;
        }
    }
    //cout<<min<<endl;
    if(min!=k){
        int temp = heap[k];
        heap[k] = heap[min];
        heap[min] = temp;
        bubble_down(min,n);
    }

}

void heap_sort(int n){
    make_heap(n);
    for(int i = 0;i<n;i++){
        ans[i] = heap[1];
        //cout<<ans[i]<<endl;
        heap[1] = heap[heap_size];
        heap_size--;
        bubble_down(1,n);
    }
}

int main(){
    heap[0]=-1;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }
    heap_sort(n);
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}