#include <bits/stdc++.h>

using namespace std;

int reception(int n, int st[], int ed[]){

    map<int,int> table;
    for(int i=0;i<n;i++){
        table[st[i]]=ed[i];
    }
    int max_seat=0;
    for(int i=0;i<2400;i++){
        int present=0;
        map<int,int>::iterator it;
        for(it=table.begin();it!=table.end();it++){
            if((i>=it->first) && (i<=it->second)){
                present++;
            }
        }
        if(present>max_seat){
            max_seat=present;
        }
    }
    return max_seat;
}

int main(){
    int n;
    cin>>n;
    int st[n];
    int ed[n];
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    for(int i=0;i<n;i++){
        cin>>ed[i];
    }
    int ans = reception(n,st,ed);
    cout<<ans<<endl;
    return 0;
}