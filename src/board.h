#ifndef BOARD_H
#define BOARD_H

#include <iostream>
using namespace std;

void PrintBoard(char board[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void makeMove(char board[8][8],int fromRow,int fromCol,int toRow,int toCol){
    board[toRow][toCol]=board[fromRow][fromCol];
    board[fromRow][fromCol]='.';
}

#endif