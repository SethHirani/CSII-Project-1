#include <iostream>
using namespace std;
int ROWS = 9, COLS = 9;

int main() {
    cout << "This will be my project folder for CSII Sudoku Project." << endl;
    cout << "This is a test" << endl;

    bool isValid(int row_id, int col_id, int candidate) {
        for (int j = 0; j < COLS; j++) {
            if (BOARD[row_id][j] == candidate) return false;

        for (int i = 0; i < ROWS; i++)
            if (BOARD[i][col_id] == candidate) return false;

        for (int i = (row_id/3)*3
        }
    }

    return 0;

}