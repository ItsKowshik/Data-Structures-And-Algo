#include <bits/stdc++.h>

using namespace std;

int board[9][9];

bool bool_search(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]==0){
                return true;
            }
        }
    }
    return false;
}

vector<int> search_zero(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]==0){
                return {i,j};
            }
        }
    }
}

void construct_candidates(vector<int> cp, int c[], int *nc){
    //Universal Set
    vector<int> un = {1,2,3,4,5,6,7,8,9};
    //Horizontal
    vector<int> v1;
    for(int i=0;i<9;i++){
        if(board[cp[0]][i]!=0){
            v1.push_back(board[cp[0]][i]);
        }
    }
    

}

void SudokuSolver(){
    int c[9];
    int nc;
    if(!bool_search()){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        vector<int> cp = search_zero();
        construct_candidates(cp,c,&nc);
        for(int i=0; i<nc; i++){
            board[cp[0]][cp[1]] = c[i];
            SudokuSolver();
            board[cp[0]][cp[1]] = 0;
        }

    }

}

int main(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>board[i][j];
        }
    }
    SudokuSolver();
    return 0;
}