#include <bits/stdc++.h>

using namespace std;

void ReplaceChar(char s[],char k,char t){
    if(s[0]=='\0'){
        return;

    }
    if(s[0]!=k){
        ReplaceChar(s+1,k,t);
    }
    else{
        s[0]=t;
        ReplaceChar(s+1,k,t);
    }

}

int main(){
    char s[100];
    cin>>s;
    char k,t;
    cin>>k>>t;
    ReplaceChar(s,k,t);
    cout<<s<<endl;
    return 0;
}