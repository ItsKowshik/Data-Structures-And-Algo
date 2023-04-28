#include <bits/stdc++.h>

using namespace std;

int FindLength(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    return FindLength(str+1)+1;
}



int main(){
    char str[100];
    cin>>str;
    cout<< FindLength(str)<<endl;
    return 0;
}