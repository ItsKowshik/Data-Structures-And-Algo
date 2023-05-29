//Interface for creating a circular linked list using OOP
#include <bits/stdc++.h>

using namespace std;
//General nodde object
struct node{
    int data;           //data
    node* next = NULL;  //next node
    node* prev = NULL;  //prev node
};

//Double circular linked list interface
class Circular_LL{
    public:
    //node* head;
    node* nil;      //the sentinel node
    //Default constructor
    Circular_LL(){
        nil = new node;
        nil->data = 0;
        nil->next = nil;
        nil->prev = nil;
    }
    //Search node with key x
    node* search(int x){
        node* h = nil->next;
        while((h!=nil) && (h->data!=x)){
            h=h->next;
        }
        return h;

    }
    //Add a node with key x at the beginning of the list
    void prepend(int x){
        node* n = new node;
        n->data = x;
        n->next = nil->next;
        nil->next->prev = n;
        nil->next = n;
        n->prev = nil;
        
    }
    //Insert a node with key y after node with key x
    void insert(int x,int y){
        node* r = search(x);
        if(r==nil){
            cout<<"Node not found!"<<endl;
        }
        else{
            node* n = new node;
            n->data = y;
            n->next = r->next;
            r->next->prev = n;
            r->next = n;
            n->prev = r;
        }
    }
    //Delete the node with key x
    void deleteNode(int x){
        node* r = search(x);
        if(r==nil){
            cout<<"Node not found!"<<endl;
        }
        else{
            r->prev->next = r->next;
            r->next->prev = r->prev;
        }
    }
    //Print the list
    void printList(){
        node* h = nil->next;
        while(h!=nil){
            cout<<h->data<<" ";
            h=h->next;
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Circular_LL L;
    cout<<"Reached here"<<endl;
    for(int i=0;i<n;i++){
        L.prepend(arr[i]);
        L.printList();
    }
    L.deleteNode(arr[n-1]);
    L.printList();
    L.insert(1,5);
    L.printList();

}