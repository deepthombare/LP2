#include<bits/stdc++.h>
#include<cstring>
using namespace std;
    void solve(vector<vector<int>>& board, int row ,bool cols[], bool nd[],bool rd[]){
        int n = 4;
        if(row == n){
            
            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                    
                    cout<<board[i][j] ;
                } 
                cout<<endl;
                }
            
            return;
        }

        for(int col = 0;col<n;col++){

            if(cols[col] == false && nd[row+col] == false && rd[row-col+n-1] == false){
                board[row][col] = 1;
                cols[col] = true;
                nd[row+col] = true;
                rd[row-col+n-1] = true;
                
                solve(board,row+1,cols,nd,rd);
                // cout<<"\nrow is "<<row<<endl
                board[row][col] = 0;
                cols[col] = false;
                nd[row+col] = false;
                rd[row-col+n-1] = false;
                
            }
        
        }
        
    }
    void solveNQueens(int n) {
        // this->n = n;
        vector<vector<int>> board;
        bool cols[n];
        bool nd[2 * n - 1];
        bool rd[2 * n - 1];
        memset(nd,0,sizeof(nd));
        memset(rd,0,sizeof(rd));
        memset(cols,0,sizeof(cols));
        
        for(int i = 0;i<n;i++){
            vector<int> vec;
            for(int j = 0;j<n;j++){
                vec.push_back(0);
            } 
            board.push_back(vec);
        }
        
        solve(board,0,cols,nd,rd);
        
    }

int main(){
    
    solveNQueens(4);
    return 0;
}