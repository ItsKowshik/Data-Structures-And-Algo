#include <bits/stdc++.h>

using namespace std;

void RepeatNames(string names){
    map<string,int> dict;
    int pt=0;
    for(int i=0;i<names.size();i++){
        if((names[i]==' ')){
            dict[names.substr(pt,i-pt)]++;
            //cout<<names.substr(pt,i-pt)<<endl;
            pt=i+1;
        }
    }
    int flg=0;
    map<string,int>:: iterator it;
    for(it=dict.begin();it!=dict.end();it++){
        //printf("%s %d",it->first,it->second);
        if(it->second>1){
            flg=1;
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
    if(flg==0){
        printf("%d",-1);
    }
}

int main(){
    string names;
    getline(cin,names);
    names = names + " ";
    RepeatNames(names);
    return 0;
}