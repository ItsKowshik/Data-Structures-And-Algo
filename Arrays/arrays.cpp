#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,csum;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k=0;
    int sum;
    int flag =0;
    int start,end;
    start=end=-1;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=k;j<n;j++){
            sum = sum + arr[j];
            if(sum==t){
                start = i;
                end = j;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
        k++;
    }
    if(flag == 0){
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
        for(int i = start;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    printf("the percentage answers the following quesetins ksiffsin this very manner");
}