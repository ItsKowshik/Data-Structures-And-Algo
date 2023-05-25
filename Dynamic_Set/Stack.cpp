#include <bits/stdc++.h>

using namespace std;

/*Create the stack dynamic set interface by OOP*/
class Stack{
    //Added private data members.
    private:        
    int top;        //Top pointer of stack
    int size=100;   //Maximum size of stack
    int s[100];     //Stack represented by dynamic array.
    //Public members
    public:
    //Constructor
    Stack(int n){
        cout<<"Stack created successfully"<<endl;
        top = 0;
    }
    //Function to check if stack is empty or non empty
    bool empty(){
        if(top==0){
            return true;
        }
        else{
            return false;
        }
    }
    //Function to add an element to top of stack
    void push(int k){
        if(top == size){
            cout<<"Stack overflow"<<endl;       //Stack is already full
        }
        else{
            top++;
            s[top]=k;
            cout<<"Inserted element "<<k<<endl;
        }
    }
    //Take the top element of the stack
    void pop(){
        if(top == 0){
            cout<<"Stack underflow"<<endl;      //Stack is already empty
        }
        else{
            cout<<s[top]<<endl;
            top--;
        }
    }
    //Subroutine to print all the elements of a stack
    void print(){
        if(top==0){
            cout<<"Empty Stack"<<endl;
        }
        else{
            for(int i=1;i<=top;i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }


};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Stack s1(n);
    for(int i=0;i<n;i++){
        s1.push(arr[i]);
    }
    s1.print();
    s1.pop();
    s1.push(1);
    s1.print();
    

}