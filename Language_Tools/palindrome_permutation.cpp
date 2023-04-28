#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> pp(string inp){
    map<char,vector<int>> char_table;
    for(int i=0;i<inp.size();i++){
        char_table[inp[i]].push_back(i);
    }
    int odd_count=0;
    map<char,vector<int>>:: iterator it;
    for(it=char_table.begin();it!=char_table.end();it++){
        if(it->second.size()%2!=0){
            odd_count++;
        }
    }
    if(odd_count>1){
        return {-1};
    }
    else{
        vector<int> ans(inp.size(),0);
        int f=0;
        for(it=char_table.begin();it!=char_table.end();it++){
            if(it->second.size()%2==0){
                for(int i =0;i<it->second.size();i=i+2){
                    ans[f]=it->second[i];
                    ans[inp.size()-f-1]=it->second[i+1];
                    f++;
                }
            }
            else{
                ans[inp.size()/2] = it->second[0];
                for(int i =1;i<it->second.size();i=i+2){
                    ans[f]=it->second[i];
                    ans[inp.size()-f-1]=it->second[i+1];
                    f++;
                }
            }
        }
        return ans;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string inp;
        cin>>inp;
        vector<int> ans = pp(inp);
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}