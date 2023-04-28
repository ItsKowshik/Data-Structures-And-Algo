#include <bits/stdc++.h>

using namespace std;

int Sub1(string s,string output[]){
    if(s.empty()){
        output[0]="";
        return 1;
    }
    int smallOutputSize = Sub1(s.substr(1),output);
    for(int i=0;i<smallOutputSize;i++){
        output[i+smallOutputSize] = s[0] + output[i];
    }
    return 2*smallOutputSize;
}

void Sub2(string s, string output2){
    if(s.empty()){
        cout<<output2<<endl;
        return;
    }
    Sub2(s.substr(1),output2+s[0]);
    Sub2(s.substr(1),output2);
}


int main(){
    string s;
    getline(cin,s);
    string output1[1000];
    int ans1 = Sub1(s,output1);
    cout<<"Method 1"<<endl;
    for(int i=0;i<ans1;i++){
        cout<<output1[i]<<endl;
    }
    cout<<endl;
    cout<<"Method 2"<<endl;
    string output2="";
    Sub2(s,output2);
    return 0;

}