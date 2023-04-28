#include <bits/stdc++.h>

using namespace std;

string getcode(int x){
    if((x==1) || (x==0)){
        return "";
    }
    else if(x==2){
        return "abc";
    }
    else if(x==3){
        return "def";
    }
    else if(x==4){
        return "ghi";
    }
    else if(x==5){
        return "jkl";
    }
    else if(x==6){
        return "mno";
    }
    else if(x==7){
        return "pqrs";
    }
    else if(x==8){
        return "tuv";
    }
    else if(x==9){
        return "wxyz";
    }
}

vector<string> keypad(int n){
    if(n==0){
        vector<string> output;
        output.push_back("");
        return output;
    }
    int smaller = n/10;
    int newc = n % 10;
    vector<string> output;
    vector<string> smallerProblem = keypad(smaller);
    string newst = getcode(newc);
    for(int i = 0;i<smallerProblem.size();i++){
        for(int j=0;j<newst.size();j++){
            string out = smallerProblem[i]+ newst[j];
            output.push_back(out);
        }
    }
    return output;
}


int main(){
    int n;
    cin>>n;
    vector<string> ans = keypad(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}