#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include "board.h"
#include "moves.h"

using namespace std;


unordered_map<char,int> files_dict={
    {'a',0},
    {'b',1},
    {'c',2},
    {'d',3},
    {'e',4},
    {'f',5},
    {'g',6},
    {'h',7}
};

unordered_map<char,int> rank_dict={
    {8,0},
    {7,1},
    {6,2},
    {5,3},
    {4,4},
    {3,5},
    {2,6},
    {1,7}
};


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
    vector<pair<int,int> > moves=getWhitePawnMove(board,6,4);
    for(size_t i=0;i<moves.size();i++){
        cout<<"Move to: ("<<moves[i].first<<", "<<moves[i].second<<")\n";
        cout<<"Number of moves: "<<moves.size()<<"\n";
    }
    if(!moves.empty()){
        makeMove(board,6,4,moves[0].first,moves[0].second);
        cout<<"\nBoard after move:\n";
        PrintBoard(board);
    }
    moves=getBlackPawnMove(board,1,4);
    for(size_t i=0;i<moves.size();i++){
        cout<<"Move to: ("<<moves[i].first<<", "<<moves[i].second<<")\n";
        cout<<"Number of moves: "<<moves.size()<<"\n";
    }
    if(!moves.empty()){
        makeMove(board,1,4,moves[0].first,moves[0].second);
        cout<<"\nBoard after move:\n";
        PrintBoard(board);
    }
    moves=getWhitePawnMove(board,6,3);
    for(size_t i=0;i<moves.size();i++){
        cout<<"Move to: ("<<moves[i].first<<", "<<moves[i].second<<")\n";
        cout<<"Number of moves: "<<moves.size()<<"\n";
    }
    if(!moves.empty()){
        makeMove(board,6,3,moves[0].first,moves[0].second);
        cout<<"\nBoard after move:\n";
        PrintBoard(board);
    }
    moves=getBlackPawnMove(board,1,3);
    for(size_t i=0;i<moves.size();i++){
        cout<<"Move to: ("<<moves[i].first<<", "<<moves[i].second<<")\n";
        cout<<"Number of moves: "<<moves.size()<<"\n";
    }
    if(!moves.empty()){
        makeMove(board,1,3,moves[0].first,moves[0].second);
        cout<<"\nBoard after move:\n";
        PrintBoard(board);
    }
    moves=makeWhitePawnCaptureRight(board,4,3);
    for(size_t i=0;i<moves.size();i++){
        cout<<"Move to: ("<<moves[i].first<<", "<<moves[i].second<<")\n";
        cout<<"Number of moves: "<<moves.size()<<"\n";
    }
    if(!moves.empty()){
        makeMove(board,4,3,moves[0].first,moves[0].second);
        cout<<"\nBoard after move:\n";
        PrintBoard(board);
    }
    moves=makeBlackPawnCaptureRight(board,3,3);
    for(size_t i=0;i<moves.size();i++){
        cout<<"Move to: ("<<moves[i].first<<", "<<moves[i].second<<")\n";
        cout<<"Number of moves: "<<moves.size()<<"\n";
    }
    if(!moves.empty()){
        makeMove(board,3,3,moves[0].first,moves[0].second);
        cout<<"\nBoard after move:\n";
        PrintBoard(board);
    }


            
    return 0;
}