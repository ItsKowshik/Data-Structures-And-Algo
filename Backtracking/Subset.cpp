#include <bits/stdc++.h>

using namespace std;

bool is_a_solution(int sol[],int k,int n){
    return (k==n);
}

void process_solution(int sol[],int arr[],int k,int n){
    for(int i=1;i<=k;i++){
        if(sol[i]==1){
            cout<<arr[i-1];
        }
    }
    cout<<endl;
}

void construct_candidates(int sol[],int k, int arr[],int c[],int *nc){
    c[0]=1;
    c[1]=0;
    *nc = 2;
}
void GenerateSubsetHelper(int arr[],int k,int sol[],int n){
    int c[n];
    int nc;
    if(is_a_solution(sol,k,n)){
        process_solution(sol,arr,k,n);
    }
    else{
        k++;
        construct_candidates(sol,k,arr,c,&nc);
        for(int i=0;i<nc;i++){
            sol[k]=c[i];
            GenerateSubsetHelper(arr,k,sol,n);
        }
    }
}

void GenerateSubset(int arr[],int n){
    int k=0;
    int sol[n];
    GenerateSubsetHelper(arr,k,sol,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    GenerateSubset(arr,n);
    return 0;
}