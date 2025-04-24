#include <stdio.h>
#include <stdlib.h>

#define N 8  // You can change this to any size of board

int board[N];

// Function to check if queen can be placed
int isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || 
            board[i] - i == col - row || 
            board[i] + i == col + row) {
            return 0;
        }
    }
    return 1;
}

// Recursive function to solve N-Queens
void solveNQueens(int row) {
    if (row == N) {
        // Print one solution
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[i] == j)
                    printf("Q ");
                else
                    printf(". ");
            }
            printf("\n");
        }
        printf("\n");
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solveNQueens(row + 1);
        }
    }
}

int main() {
    solveNQueens(0);
    return 0;
}
