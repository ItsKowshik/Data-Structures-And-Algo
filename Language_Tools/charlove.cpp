#include <bits/stdc++.h>

using namespace std;

vector<int> countchar(string s){
    int counta,counts,countp;
    counta=counts=countp=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            counta++;
        }
        else if(s[i]=='s'){
            counts++;
        }
        else if(s[i]=='p'){
            countp++;
        }
    }
    return {counta,counts,countp};
}

int main(){
    string inp;
    cin>>inp;
    vector<int> ans = countchar(inp);
    //cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    printf("%d %d %d \n",ans[0],ans[1],ans[2]);
}