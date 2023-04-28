#include <bits/stdc++.h>

using namespace std;

int Path[100][100];
int PossiblePath[100][100];

void MazeSolverHelper(int row, int col, int n){
    if((row==n-1)&&(col==n-1)){
        PossiblePath[row][col]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<PossiblePath[i][j]<<" ";
            }
            cout<<endl;
        }
        PossiblePath[row][col]=0;
        return;
    }

    if(((row>=n) ||(col>=n) ||(row<0)||(col<0)) ||(Path[row][col]==0) ||(PossiblePath[row][col]==1)){
        return;
    }
    else{
        PossiblePath[row][col]=1;
        MazeSolverHelper(row+1,col,n);
        MazeSolverHelper(row-1,col,n);
        MazeSolverHelper(row,col+1,n);
        MazeSolverHelper(row,col-1,n);
        PossiblePath[row][col]=0;
    }

}


void MazeSolver(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            PossiblePath[i][j]=0;
        }
    }
    MazeSolverHelper(0,0,n);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>Path[i][j];
        }
    }
    MazeSolver(n);
    return 0;

}