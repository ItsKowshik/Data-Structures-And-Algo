#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum =0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> s;
    map<int,int> count;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(s.find(-arr[i])!=s.end()){
            sum = sum + count[-arr[i]];
        }
    }
    cout<<sum<<endl;
}