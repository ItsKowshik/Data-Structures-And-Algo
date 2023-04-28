#include <bits/stdc++.h>

using namespace std;

vector<int> subseq(int arr[],int n){
    int low,high;
    int len=0;
    sort(arr,arr+n);
    int i=0;
    int j=1;
    while(i!=n){
        if(arr[j]==arr[j-1]+1){
            if(j-i+1>len){
                len=j-i+1;
                low=arr[i];
                high=arr[j];
            }
            else if(j-i+1==len){
                
            }
            j++;
        }
        else{
            if(j-i>len){
                len=j-i;
                low=arr[i];
                high=arr[j-1];
            }
            i=j;
            j++;
        }
    }
    return {low,high};

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = subseq(arr,n);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}