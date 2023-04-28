#include <bits/stdc++.h>

using namespace std;

void RemoveChar(char str[], char k){
    if(str[0]=='\0'){
        return;
    }
    if(str[0]!=k){
        RemoveChar(str+1,k);
    }
    else{
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        RemoveChar(str,k);
    }
}

int main(){
    char str[100];
    cin>>str;
    char x;
    cin>>x;
    RemoveChar(str,x);
    cout<<str<<endl;
    return 0;
}