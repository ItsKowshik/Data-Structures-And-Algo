#include <bits/stdc++.h>

using namespace std;

int str_len(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    else{
        int smallString = str_len(str+1);
        return smallString+1;
    }
}

int main(){
    char str[100];
    cin>>str;
    cout<<str_len(str)<<endl;
    return 0;
}