//Create a single linked list interface

#include <bits/stdc++.h>

using namespace std;

//The single node structure with satellite data and a next node
struct Node{
    int data;               //Satellite data
    Node* next = NULL;      //Next node
};
//The single linked list interface
class Single_LL{
    public:
    
    Node* head;             //The pointer to the head of the list;
    Single_LL(){
        head = NULL;        //Default constructor to set the head to NULL;
    }
    //Search the linked list for the node with the given key;
    Node* search(int k){
        Node* x = head;
        while((x != NULL) && (x->data!=k)){
            x = x->next;
        }
        return x;
    }
    //Insert an element to the start of the linked list
    void prepend(int k){
        Node* n = new Node;
        n->data = k;
        n->next = head;
        head = n;
    }
    //Insert a node with key y after node with key x;
    void insert(int x, int y){
        Node* n = new Node;
        n->data = y;
        Node* r = search(x);
        if(r!=NULL){
            n->next = r->next;
            r->next = n;
        }
        else{
            cout<<"Node with value "<<x<<" not found in the list"<<endl; 
        }
    }
    //Delete the node with key x;
    void deleteNode(int x){
        Node* h = head;
        //Boundary condition o=if the list is empty;
        if(head==NULL){
                cout<<"Empty list"<<endl;
        }
        //Boundary condition if the node to be deleted is the first node
        else if(head->data == x){
            head = head->next;
        }
        else{
            while((h->next->data != x) && (h!=NULL)){
                h = h->next;
            }
            if(h==NULL){
                cout<<"Node not present"<<endl;
            }
            else{
                h->next = h->next->next;
            }
        }
    }

    void printList(){
        Node* x = head;
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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Single_LL L;
    for(int i=0; i<n; i++){
        L.prepend(arr[i]);
        L.printList();
    }
    L.prepend(10);
    L.printList();
    L.deleteNode(10);
    L.printList();
    L.insert(1,7);
    L.printList();


    return 0;


}