#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next = NULL;
    node* prev = NULL;
};


class Circular_LL{
    public:
    //node* head;
    node* nil;
    
    Circular_LL(){
        nil = new node;
        nil->data = 0;
        nil->next = nil;
        nil->prev = nil;
    }
    node* search(int x){
        node* h = nil->next;
        while((h!=nil) && (h->data!=x)){
            h=h->next;
        }
        return h;

    }
    void prepend(int x){
        node* n = new node;
        n->data = x;
        n->next = nil->next;
        nil->next->prev = n;
        nil->next = n;
        n->prev = nil;
        
    }
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