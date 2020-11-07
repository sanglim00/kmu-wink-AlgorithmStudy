#include <iostream>

using namespace std;

int N, K, countN=0;

void makeN() {
	N = N - 1;
	countN += 1;			
	if (N % K != 0) makeN();	
}

void devideN() {	
	if (N % K == 0) {
		while (N != 1) {	
			N = N / K;
			countN += 1;
		}
	}
	else {
		makeN();
		devideN();
	}
}

int main() {
	cin >> N >> K;
	devideN();
	cout << countN << endl;
}