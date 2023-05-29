//Created a double linked list using OOP
#include <bits/stdc++.h>

using namespace std;
/*The interface for the node structure*/
struct node{
    int data;                   /* data */    
    node* next = NULL;          /*the next pointer*/
    node* prev = NULL;          //the previous pointer
};
/*Created the double linked list interface class*/
class Double_LL{
    public:
    node* head;                 //head pointer
    Double_LL(){
        head = NULL;            //Default constructor
    }
    //Search the node with key x
    node* search(int k){
        node* x = head;
        while((x!=NULL) && (x->data!=k)){
            x = x->next;
        }
        return x;
    }
    //Insert the node with key k at the beginning of the list
    void prepend(int k){
        node* x = new node;
        x->data = k;
        x->next = head;
        if(head!=NULL){
            head->prev =x;
        }
        head = x;

    }
    //Insert the node with key y after the node with key x
    void insert(int x, int y){
        node* r = search(x);
        node* n = new node;
        n->data = y;
        if(r==NULL){
            cout<<"Node not found!"<<endl;
        }
        else{
            n->next = r->next;
            r->next = n;
            //Inserting at the end of the list
            if(n->next!=NULL){
                n->prev = n->next->prev;
                n->next->prev =n;
            }
            else{
                n->prev = r;
            }
        }
    }
    //Delete the node with key x
    void deleteNode(int x){
        node* r = search(x);
        if(r == NULL){
            cout<<"Node not found!"<<endl;
        }
        else if(r==head){
            head = head->next;
        }
        else{
            r->prev->next = r->next;
            r->next->prev = r->prev;
        }

    }
    //Print the linked list
    void  printList(){
        node* x = head;
        while(x!=NULL){
            cout<<x->data<<" ";
            x = x->next;
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
    Double_LL L;
    for(int i=0;i<n;i++){
        L.prepend(arr[i]);
        L.printList();
    }
    L.deleteNode(arr[n-1]);
    L.printList();
    L.insert(1,5);
    L.printList();

}
