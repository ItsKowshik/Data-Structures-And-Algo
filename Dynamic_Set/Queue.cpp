//Implementation of queue interface using class
#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int head;               //Pointer to the head of the queue
    int tail;               //Pointer to the tail of the queue
    int size;               //Store the size of the queue
    int q[100];             //The queue implemented as a dynamic array
    public:
    //Constructor to create a queue of a given size
    Queue(int n){
        cout<<"Queue created successfully"<<endl;
        head = tail = 0;
        size = n;
    }
    //Subtroutine to check if the queue is empty
    bool empty(){
        if(head == tail){
            return true;
        }
        else{
            return false;
        }
    }
    //Subroutine to check if the queue is full
    bool full(){
        if((tail+1==head)||((head == 0) &&(tail == size))){  //The boundary conditions
            return true;
        }
        else{
            return false;
        }
    }
    //Add a value to the end of the queue
    void enqueue(int k){
        if(full()){
            cout<<"Queue is full"<<endl;        //The queue is full
        }
        else{
            if(tail == size){                   //The circular condition to add the value to the beginning of the queue
                tail = 0;
                q[tail]=k;
            }
            else{                               //Add an element to the end of the queue
                q[tail]=k;
                tail = tail + 1;
            }
            cout<<"Successfully enqueued"<<endl;
        }
    }
    //Subroutine to remove the front element from the queue
    void dequeue(){
        if(empty()){
            cout<<"Queue is empty"<<endl;       //Empyty Queue
        }
        else{
            cout<<"Successfully dequeued "<<q[head]<<endl;
            q[head]=0;
            if(head == size){                   //Dequeue last element
                head = 0;
            }
            else{
                head = head + 1;                //Shift head pointer
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