#include <bits/stdc++.h>

using namespace std;

string remove_duplicates(string s){
    set<char> l;
    string output="";
    for(int i=0;i<s.size();i++){
        if(l.find(s[i])==l.end()){
            l.insert(s[i]);
            output = output+s[i];
        }
    }
    return output;
}

int main(){
    string inp;
    getline(cin,inp);
    string out = remove_duplicates(inp);
    cout<<out<<endl;
    return 0;
}