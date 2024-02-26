#include <stdio.h>
#include <stdbool.h>

#define N 4

int board[N][N];

void printBoard() {
	int i,j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

bool isSafe(int row, int col) {
	int i,j;
    for (i = 0; i < col; i++) {
        if (board[row][i]) {
            return false;
        }
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    for (i = row, j = col; j >= 0 && i < N; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    return true;
}

bool solveNQueens(int col) {
    if (col >= N) {
        printBoard();
        return true;
    }
    bool res = false;
    int i;
    
    for (i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;
            res = solveNQueens(col + 1) || res;
            board[i][col] = 0;
        }
    }
    return res;
}

int main() {
    if (!solveNQueens(0)) {
        printf("Solution does not exist");
    }
    return 0;
}

