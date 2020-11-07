#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M, K;		// N : �迭�� ũ�� , M : ���� Ƚ�� K : �ִ� ���� ���� ��
	int num;			// N�� �Է� ���� ����
	int sum = 0;		// ���� ���� ������ ����

	cin >> N >> M >> K;

	vector<int> V;
	for (int i = 0; i < N; i++) {
		cin >> num;
		V.push_back(num);		// N���� �Է��� �޾� ���Ϳ� ���� ���� 
	}
	sort(V.begin(), V.end());		// ����

	int max_F = V.back();			// ���� ū �� 
	V.pop_back();
	int max_S = V.back();			// �� ���� ū �� 

	int Q = M / K;						// (���� ū �� * K )�� �� Ƚ�� 
	int R = M % K;					// K ���ݸ��� �� �� ���� ū ���� Ƚ��

	sum += Q * K * max_F + R * max_S;

	cout << sum << endl;
}