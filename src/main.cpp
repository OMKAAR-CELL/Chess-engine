#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void PrintBoard(char board[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

vector<pair<int,int>> getWhitePawnMove(char board[8][8],int row, int col){
    vector<pair<int,int>> moves;
    if(row-1>=0 && board[row-1][col]=='.'){
        if(row==6&&board[row-2][col]=='.'){
            moves.push_back({row-2,col});
        }
        moves.push_back({row-1,col});
    }
    return moves;
}

void makeMove(char board[8][8],int fromRow,int fromCol,int toRow,int toCol)
{
    board[toRow][toCol]=board[fromRow][fromCol];
    board[fromRow][fromCol]='.';
}
int main(){
    char board[8][8]={{'r','n','b','q','k','b','n','r'},
                {'p','p','p','p','p','p','p','p'},
                {'.','.','.','.','.','.','.','.'},
                {'.','.','.','.','.','.','.','.'},
                {'.','.','.','.','.','.','.','.'},
                {'.','.','.','.','.','.','.','.'},
                {'P','P','P','P','P','P','P','P'},
                {'R','N','B','Q','K','B','N','R'}};
                
            PrintBoard(board);
            auto moves=getWhitePawnMove(board,6,4);
            for(auto& m:moves){
                cout<<"Move to: ("<<m.first<<", "<<m.second<<")\n";
                cout<<"Number of moves: "<<moves.size()<<"\n";
            }
            if(!moves.empty()){
                makeMove(board,6,4,moves[0].first,moves[0].second);
                cout<<"\nBoard after move:\n";
                PrintBoard(board);
            }
            // PrintBoard(board);
    return 0;
}