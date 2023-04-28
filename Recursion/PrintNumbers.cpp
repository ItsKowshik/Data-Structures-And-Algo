#include <bits/stdc++.h>

using namespace std;

void PrintNumbers(int n){
    if(n==0){
        return;
    }
    PrintNumbers(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintNumbers(n);
    return 0;

}