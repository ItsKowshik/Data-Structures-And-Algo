#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int **arr = new int* [n];
        for(int i =0;i<n;i++){
            arr[i] = new int[n];
            for(int j =0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int sum =0;
        //Top boundary
        for(int j=0;j<n;j++){
            sum = sum + arr[0][j];
        }
        //Left boundary
        for(int i=0;i<n;i++){
            sum = sum + arr[i][0];
        }
        //Bottom boundary
        for(int j=0;j<n;j++){
            sum =sum + arr[n-1][j];
        }
        //Right boundary
        for(int i=0;i<n;i++){
            sum = sum + arr[i][n-1];
        }
        //Left diagonal
        for(int i =0;i<n;i++){
            sum = sum + arr[i][i];
        }
        //Right Diagonal
        for(int i=n-1;i>=0;i--){
            sum = sum + arr[i][i];
        }
        //Correction
        sum = sum - 2*(arr[0][0]+arr[n-1][0]+arr[0][n-1]+arr[n-1][n-1]);
        if(n%2!=0){
            sum = sum - arr[(int)floor(n/2)][(int)floor(n/2)];
        }
        cout<<sum<<endl;
        t--;

    }
    return 0;
}