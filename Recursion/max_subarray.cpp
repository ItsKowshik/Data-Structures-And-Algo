#include <bits/stdc++.h>

using namespace std;

vector<int> max_cross(int st,int mid,int ed,int arr[]){
    int left_sum = INT_MIN;
    int sum = 0;
    int max_left=mid;
    for(int i=mid;i>=0;i--){
        sum = sum +arr[i];
        if(sum>left_sum){
            left_sum=sum;
            max_left = i;
        }
    }
    int right_sum = INT_MIN;
    int sum1 =0;
    int max_right = mid+1;
    for(int j=mid+1;j<=ed;j++){
        sum1 = sum1 +arr[j];
        if(sum1>right_sum){
            right_sum = sum1;
            max_right = j;
        }
    }
    
    return {max_left,max_right,left_sum+right_sum};

}

vector<int> max_subarray(int st, int ed, int arr[]){
    if(st==ed){
        return {st,ed,arr[st]};
    }
    else{
        int mid =(st+ed)/2;
        vector<int> left = max_subarray(st,mid,arr);
        cout<<left[0]<<" "<<left[1]<<" "<<left[2]<<endl;
        vector<int> right = max_subarray(mid+1,ed,arr);
        cout<<right[0]<<" "<<right[1]<<" "<<right[2]<<endl;
        vector<int> cross = max_cross(st,mid,ed,arr);
        cout<<cross[0]<<" "<<cross[1]<<" "<<cross[2]<<endl;
        if((left[2]>=right[2]) && (left[2]>=cross[2])){
            return left;
        }
        else if((right[2]>=left[2]) && (right[2]>=cross[2])){
            return right;
        }
        else{
            return cross;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = max_subarray(0,n-1,arr);
    cout<<"The maximum subarray is from "<<ans[0]<<" to "<<ans[1]<<" and is "<<ans[2]<<endl;
    return 0;
}