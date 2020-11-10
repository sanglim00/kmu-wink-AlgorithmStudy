#include <iostream>

using namespace std;

int checkROW(char row, int col) {
	int count = 0;
	if ('b' < row && row < 'g') {
		if (1 < col && col < 8) count += 4;
		else count += 2;
	}
	else {
		if (1 < col && col < 8) count += 2;
		else count += 1;
	}
	return count;
}
int checkCOL(char row, int col) {
	int count = 0;
	if ('a' < row && row < 'h') {
		if (2 < col && col < 7)count += 4;
		else count += 2;
	}
	else {
		if (2 < col && col < 7)count += 2;
		else count += 1;
	}
	return count;
}

int main() {
	char row;
	int col;
	int count = 0;

	cin >> row >> col;
	cout << checkROW(row, col) + checkCOL(row, col) << endl;

}