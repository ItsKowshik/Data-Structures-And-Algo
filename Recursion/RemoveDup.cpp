#include <bits/stdc++.h>

using namespace std;

void RemoveDup(char s[]){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]!=s[1]){
        RemoveDup(s+1);
    }
    else{
        int i=1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        RemoveDup(s);
    }
}


int main(){
    char s[100];
    cin>>s;
    RemoveDup(s);
    cout<<s<<endl;
    return 0;

}