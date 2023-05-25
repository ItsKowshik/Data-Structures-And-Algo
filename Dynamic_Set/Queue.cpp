//Implementation of queue interface using class
#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int head;
    int tail;
    int size;
    int q[100];
    public:
    Queue(int n){
        cout<<"Queue created successfully"<<endl;
        head = tail = 0;
        size = n;
    }
    bool empty(){
        if(head == tail){
            return true;
        }
        else{
            return false;
        }
    }
    bool full(){
        if((tail+1==head)||((head == 0) &&(tail == size))){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int k){
        if(full()){
            cout<<"Queue is full"<<endl;
        }
        else{
            if(tail == size){
                tail = 0;
                q[tail]=k;
            }
            else{
                q[tail]=k;
                tail = tail + 1;
            }
            cout<<"Successfully enqueued"<<endl;
        }
    }
    void dequeue(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Successfully dequeued "<<q[head]<<endl;
            q[head]=0;
            if(head == size){
                head = 0;
            }
            else{
                head = head + 1;
            }
        }
    }
    void print(){
        cout<<"The full queue"<<endl;
        for(int i=0;i<size;i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
        //cout<<"Reached here"<<endl;
    }

};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Queue q1(n);
    for(int i=0;i<n;i++){
        q1.enqueue(arr[i]);
        q1.print();
    }
    q1.dequeue();
    q1.print();
    q1.enqueue(10);
    q1.print();
    q1.enqueue(20);
    q1.print();

    return 0;
}