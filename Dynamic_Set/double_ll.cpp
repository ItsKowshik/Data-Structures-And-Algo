#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next = NULL;
    node* prev = NULL;
};

class Double_LL{
    public:
    node* head;
    Double_LL(){
        head = NULL;
    }
    node* search(int k){
        node* x = head;
        while((x!=NULL) && (x->data!=k)){
            x = x->next;
        }
        return x;
    }
    void prepend(int k){
        node* x = new node;
        x->data = k;
        x->next = head;
        if(head!=NULL){
            head->prev =x;
        }
        head = x;

    }
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
            if(n->next!=NULL){
                n->prev = n->next->prev;
                n->next->prev =n;
            }
            else{
                n->prev = r;
            }
        }
    }
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
