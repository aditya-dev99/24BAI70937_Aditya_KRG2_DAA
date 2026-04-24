#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<string>> solutions;
int countSolutions = 0;

void solve(int row, vector<string>& board, vector<int>& col,
           vector<int>& diag1, vector<int>& diag2) {

    if (row == n) {
        solutions.push_back(board);
        countSolutions++;
        return;
    }

    for (int j = 0; j < n; j++) {
        if (col[j] == 0 && diag1[row + j] == 0 && diag2[row - j + n - 1] == 0) {

            board[row][j] = 'Q';
            col[j] = diag1[row + j] = diag2[row - j + n - 1] = 1;

            solve(row + 1, board, col, diag1, diag2);

            board[row][j] = '.';
            col[j] = diag1[row + j] = diag2[row - j + n - 1] = 0;
        }
    }
}

int main() {
    cout << "Enter N: ";
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<int> col(n, 0), diag1(2 * n - 1, 0), diag2(2 * n - 1, 0);

    solve(0, board, col, diag1, diag2);

    cout << "\nTotal Solutions: " << countSolutions << endl;

    for (auto &sol : solutions) {
        cout << "\nSolution:\n";
        for (auto &row : sol) {
            cout << row << endl;
        }
    }
}
