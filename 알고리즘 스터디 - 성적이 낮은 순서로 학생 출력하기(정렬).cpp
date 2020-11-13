#include <iostream>

using namespace std;

struct Student {
	string name;
	int score;
};

void SortedScore(int N, Student* menber) {
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (menber[j].score > menber[j + 1].score) {
				Student tmp = menber[j];
				menber[j] = menber[j + 1];
				menber[j + 1] = tmp;
			}
		}
	}
}

int main() {
	int N;

	cin >> N;

	Student* menber = new Student[N];
	for (int i = 0; i < N; i++) cin >> menber[i].name >> menber[i].score;
	
	SortedScore(N, menber);

	for (int i = 0; i <N; i++) cout << menber[i].name << " ";
}