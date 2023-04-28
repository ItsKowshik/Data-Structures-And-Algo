#include <bits/stdc++.h>

using namespace std;

bool is_a_solution(int sol[],int k,int n){
    return k==n;
}

void process_solution(int sol[],int arr[],int k,int n){
    for(int i=1;i<=k;i++){
        cout<<sol[i]<<" ";
    }
    cout<<endl;
}

void construct_candidates(int sol[],int arr[],int c[],int k,int n, int *nc){
    bool in_perm[100];
    for(int i=1;i<100;i++){
        in_perm[i]=false;
    }
    for(int j=1;j<k;j++){
        in_perm[sol[j]]=true;
    }
    //cout<<"Reached Here 2"<<endl;
    *nc =0;
    for(int i=1;i<=n;i++){
        if(in_perm[i]==false){
            c[*nc]=i;
            *nc=*nc+1;
        }

    }

}

void GeneratePermHelper(int arr[], int sol[],int k, int n){
    //cout<<"Reached Here"<<endl;
    int c[n];
    int nc;
    if(is_a_solution(sol,k,n)){
        process_solution(sol,arr,k,n);
    }
    else{
        k++;
        construct_candidates(sol,arr,c,k,n,&nc);
        for(int i=0;i<nc;i++){
            sol[k]=c[i];
            GeneratePermHelper(arr,sol,k,n);
        }
    }
}

void GeneratePerm(int arr[], int n){
    int sol[n];
    GeneratePermHelper(arr,sol,0,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    GeneratePerm(arr,n);
    return 0;
}