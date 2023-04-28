#include <bits/stdc++.h>

using namespace std;

//typedef long long ll;
vector<int> voter_list(int l1[],int l2[], int l3[],int n1,int n2,int n3){
    map<int,int> freq_table;

    for(int i=0;i<n1;i++){
        freq_table[l1[i]]++;
    }

    for(int i=0;i<n2;i++){
        freq_table[l2[i]]++;
    }

    for(int i=0;i<n3;i++){
        freq_table[l3[i]]++;
    }
    vector<int> ans;
    map<int,int>::iterator it;
    for(it=freq_table.begin();it!=freq_table.end();it++){
        if(it->second>=2){
            ans.push_back(it->first);
        }
    }
    return ans;

}

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int l1[n1];
    int l2[n2];
    int l3[n3];
    for(int i=0;i<n1;i++){
        cin>>l1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>l2[i];
    }
    for(int i=0;i<n3;i++){
        cin>>l3[i];
    }
    vector<int> ans = voter_list(l1,l2,l3,n1,n2,n3);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}