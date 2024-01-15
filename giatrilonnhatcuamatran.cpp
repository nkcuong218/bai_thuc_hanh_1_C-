#include <iostream>
#include <vector>
using namespace std;

bool isPositive(int n) {
  return n > 0;
}

int sumDiagonal(vector<vector<int>>& A) {
  int sum = 0;
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A[i].size(); j++) {
      int diag = 0;
      if (i == j) {
        diag += A[i][j];
      } else if (i == j + 1 || i == j - 1) {
        diag += A[i][j] + A[i][j + 1];
      } else {
        diag += A[i][j] + A[i][j + 1] + A[i][j - 1];
      }
      sum += diag;
    }
  }
  return sum;
}
void readData(vector<vector<int>>& A) {
  for (int i = 0; i < data.size(); i++) {
    int N;
    cin >> N;
    vector<vector<int>> A(N * N);
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        cin >> A[j * N + k];
      }
    }
    cout << "Ma tr?n A: ";
    for (int j = 0; j < N; j++) {
      for (int k =k < N; k++) {
        cout << A[j * N + k] << " ";
      }
      cout << endl;
    }
  }
}

void printMax(vector<vector<int>>& A) {
  int max = 0;
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A[i].size(); j++) {
      int diag = sumDiagonal(A);
      if (diag > max) {
        max = diag;
      }
    }
  }
  cout << "Giá tr? l?n nh?t tìm du?c là: " << max << endl;
}
int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N * N);
  readData(A);
  printMax(A);
  return 0;
}

