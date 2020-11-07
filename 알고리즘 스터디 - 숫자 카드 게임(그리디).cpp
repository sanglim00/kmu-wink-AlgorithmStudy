#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;			// N : ��, M : ��
	int num;

	cin >> N >> M;
	int** arr = new int*[N];		// 2���� �迭 �����Ҵ�
	for (int i = 0; i < N; i++) arr[i] = new int[M];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> num;
			arr[i][j] = num;
		}
	}
	vector<int> J_V, I_V;			// J_V : �� �࿡�� ���� ���� �� ã�� ���� ���� , I_V : ����� ���� ���� ���� ���� ū ���� ã�� ���� ����

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			J_V.push_back(arr[i][j]);
		}
		I_V.push_back(*min_element(J_V.begin(), J_V.end()));		// J_V : �� �࿡�� ���� ���� ���� I_V�� �ִ´�
		J_V.clear();			// ���� �ݺ������� �ٽ� ���͸� ����ϱ� ����
	}
	cout << *max_element(I_V.begin(), I_V.end()) << endl;		// �ึ���� ���� ���� ������ ���� ���Ϳ��� ���� ū �� ���
}