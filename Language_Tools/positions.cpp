#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void positions(int n,string names[],int val[][3]){
    map<int,string> name_list;
    map<int,int> score_list;
    for(int i=0;i<n;i++){
        name_list[i] = names[i];
    }
    int score[n];
    for(int i=0;i<n;i++){
        int csum =0;
        for(int j=0;j<3;j++){
            csum = csum +val[i][j];
        }
        score_list[i]=csum;
        score[i]=csum;
    }
    int serial=1;
    sort(score,score+n,greater<int>());
    for(int i=0;i<n;i++){
        map<int,int>::iterator it;
        for(it=score_list.begin();it!=score_list.end();it++){
            if(it->second==score[i]){
                cout<<serial<<" "<<name_list[it->first]<<endl;
                serial++;
            }
        }
    }
    

}

int main(){
    int n;
    cin>>n;
    string names[n];
    int val[n][3];
    for(int i=0;i<n;i++){
        cin>>names[i]>>val[i][0]>>val[i][1]>>val[i][2];
    }
    positions(n,names,val);
    return 0;


}