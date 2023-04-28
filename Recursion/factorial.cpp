#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int SmallerProblem = factorial(n-1);
    return n * SmallerProblem;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}