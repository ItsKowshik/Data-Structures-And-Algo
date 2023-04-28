#include <bits/stdc++.h>

using namespace std;

int digits(int n){

    if(n==0){
        return 0;
    }
    return digits(n/10)+1;
}


int main(){
    int n;
    cin>>n;
    cout<<digits(n)<<endl;

}