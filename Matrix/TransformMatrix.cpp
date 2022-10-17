#include <vector>
#include <iostream>

using namespace std;

int main() {
    int R, C, M;
    int i, j;
    vector<vector<int>> matrix(R, vector<int>(C));
    vector<int> moves(M);
    cin >> R >> C >> M;
    for (i=0;i<R;i++) {
        for (j=0;j<C;j++) {
            cin >> matrix[i][j];
        }
    }
    for (i=0;i<M;i++) {
        cin >> moves[i];
    }
    for (i=M;i>0;i--) {
        if (moves[i] == 0) {
            matrix = rotate_matrix(matrix);
        }
        if (moves[i] == 1) {
            matrix = flip_matrix(matrix);
        }
    }
    cout << matrix.size() << " " >> matrix[0].size() << endl;
    for (int i=0;i<matrix.size();i++) {
        for (int j=0;j<matrix[i].size();j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

vector<vector<int>> flip_matrix(vector<vector<int>> matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> matrix_B(row, vector<int>(col));
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;i++) {
            matrix_B[i][j] = matrix[row-i-1][j];
        }
    }
    return matrix_B;
}

vector<vector<int>> rotate_matrix(vector<vector<int>> matrix) {
    int row = matrix.size();
    int col = matrix.size();
    vector<vector<int>> temp_matrix(col, vector<int>(row));
    for (int i=0;i<col;i++) {
        for (int j=0;j<row;j++) {
            temp_matrix[i][j] = matrix[j][row-i-1];
        }
    }
    return temp_matrix;
}
