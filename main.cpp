#include<iostream>
using namespace std;
void printcoulumn(int A[3][3], int col) {
	for (int i = 0; i < 3; i++) {
		cout << A[i][col] << " ";
	}
	cout << endl;
}
int main() {
	int col;
	int A[3][3];
	cout << "Enter the element of the 3*3 matrix:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> A[i][j];
		}
	}
	cout << "The column you want to print:" << endl;
	cin >> col;
	if (col >= 0 && col < 3) {
		printcoulumn(A, col);
	}
	else {
		cout << "Error: Column index must be 0, 1, or 2." << endl;
	}
	return 0;
}
