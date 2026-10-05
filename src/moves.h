#ifndef MOVES_H
#define MOVES_H

#include <vector>
#include <utility>
#include <cctype>
using namespace std;


vector<pair<int,int> > getWhitePawnMove(char board[8][8],int row, int col){
    vector<pair<int,int> > moves;
    if(row-1>=0 && board[row-1][col]=='.'){
        if(row==6&&board[row-2][col]=='.'){
            moves.push_back(make_pair(row-2,col));
        }
        moves.push_back(make_pair(row-1,col));
    }
    return moves;
}

vector<pair<int,int> > getBlackPawnMove(char board[8][8], int row, int col){
    vector<pair<int,int> > moves;
    if(board[row+1][col]=='.' && row+1<=7){
        if(row==1 && board[row+2][col]=='.'){
            moves.push_back(make_pair(row+2,col));
        }
        moves.push_back(make_pair(row+1,col));
    }
    return moves;
}

vector<pair<int,int> > makeWhitePawnCaptureLeft(char board[8][8], int row, int col){
    vector<pair<int,int> > moves;
    if(row-1>=0 && col-1>=0 && islower(board[row-1][col-1])){
        moves.push_back(make_pair(row-1,col-1));
    }
    return moves;
}

vector<pair<int,int> > makeWhitePawnCaptureRight(char board[8][8], int row, int col){
    vector<pair<int,int> > moves;
    if(row-1>=0 && col+1<=7 && islower(board[row-1][col+1])){
        moves.push_back(make_pair(row-1,col+1));
    }
    return moves;
}

vector<pair<int,int> > makeBlackPawnCaptureLeft(char board[8][8], int row, int col){
    vector<pair<int,int> > moves;
    if(row+1<=7 && col-1>=0 && isupper(board[row+1][col-1])){
        moves.push_back(make_pair(row+1,col-1));
    }
    return moves;
}

vector<pair<int,int> > makeBlackPawnCaptureRight(char board[8][8], int row, int col){
    vector<pair<int,int> > moves;
    if(row+1<=7 && col+1<=7 && isupper(board[row+1][col+1])){
        moves.push_back(make_pair(row+1,col+1));
    }
    return moves;
}

#endif