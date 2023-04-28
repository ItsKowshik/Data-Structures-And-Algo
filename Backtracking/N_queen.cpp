#include <bits/stdc++.h>

int board[11][11];

using namespace std;

bool is_a_solution(int k, int n){
    return (k==n);
}

void process_solution(int k, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool is_possible(int row,int col,int n){
    // Same Column
  for(int i=row-1;i>=0;i--){
    if(board[i][col] == 1){
      return false;
    }
  }
//Upper Left Diagonal
  for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
    if(board[i][j] ==1){
      return false;
    }
  }

  // Upper Right Diagonal

  for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
    if(board[i][j] == 1){
      return false;
    }
  }

  return true;
}
void construct_candidates(int c[], int k, int n){
    for(int i = 0; i < n; i++){
        if(is_possible(k,i,n)){
            c[i] = 1;
        }
        else{
            c[i]=0;
        }
    }
}

void NQueenHelper(int k,int n){
    int c[n];
    int nc;
    if(is_a_solution(k,n)){
        process_solution(k,n);
    }
    else{
        construct_candidates(c,k,n);
        for(int i=0;i<n;i++){
                if(c[i]==1){
                    board[k][i]=1;
                    NQueenHelper(k+1,n);
                    board[k][i]=0;
                }
        }
    }
}

void NQueen(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            board[i][j]=0;
        }
    }
    NQueenHelper(0,n);
   
}

int main(){
    int n;
    cin>>n;
    NQueen(n);
    return 0;
}