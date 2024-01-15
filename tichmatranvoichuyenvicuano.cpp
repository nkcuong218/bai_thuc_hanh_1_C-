#include <iostream>
#include <vector>
using namespace std;
bool isPositive(int n) {
  return n > 0;
}
void calculateProduct(vector<vector<int>>& A, vector<vector<int>>& B) {
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A[i].size(); j++) {
      int sum = 0;
      for (int k = 0; k < A[i].size(); k++) {
        if (isPositive(A[i][k])) {
          sum += A[i][k];
        }
      }
      int nextSum = 0;
      for (int k = j + 1; k < A[i].size(); k++) {
        if (isPositive(A[i][k])) {
          nextSum += A[i][k];
        }
      }
      B[i][j] += sum + nextSum;
    }
  }
}
void readData(vector<vector<int>>& A, vector<vector<int>>& B) {
  for (int i = 0; i < data.size(); i++) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n * m);
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        cin >> a[j * m + k];
      }
    }
    vector<vector<int>> B(n * m);
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < n; k++) {
        cin >> B[j * n + k];
      }
    }
    calculateProduct(A, B);
  }
}

void printResult(vector<vector<int>>& A, vector<vector<int>>& B) {
  for (int i = 0; i < data.size(); i++) {
    cout << "B? test th? " << i + 1 << ": ";
    for (int j = 0; j < data[i].size(); j++) {
      cout << data[i][j] << " ";
    }
    cout << endl;
    
  	for (int j = 0; j < data[i].size(); j++) {
  		cout << "Ma tr?n tích: ";
  		for (int k = 0; k < data[i].size(); k++) {
  			cout << data[i][j] << " ";
  		}
  		cout << endl;
  	}
  	for (int j = 0; j < data[i].size(); j++) {
  		cout << "Kho?ng tr?ng: ";
  		for (int k = 0 ; k < data[i].size(); k++) {
  			cout << data[i][j] << " ";
  		}
  		cout << endl;
  	}
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> A(n * m);
  vector<vector<int>> B(n * m);
  readData(A, B);
  printResult(A, B);
  return 0;
}

