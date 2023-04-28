#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k = n;
        int rem_sum = 0;
        while(k!=0){
            int rem = k%10;
            rem_sum = rem_sum + rem;
            k = k/10;
        }
        cout<<rem_sum<<endl;
    }
    return 0;
}