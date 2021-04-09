#include <iostream>
#include <algorithm>
using namespace std;

int queen[15] = { -1, };
int cnt = 0;

bool checking(int index) {
	if (index == 0) return true;
	else {
		for (int i = 0; i < index; i++) {
			//���� �����϶�
			if (queen[i] == queen[index]) return false;
			//�밢�� �� ������ ��
			else if (abs(queen[index] - queen[i]) == index - i) return false;
		}
	}
	return true;
}

void chess(int index, int N) {
	if (index == N) { ++cnt; }
	else {
		for (int i = 0; i < N; i++) {
			//i���� ä��
			queen[index] = i;
			//i���� ���ǿ� �����ߴٸ� ���� level�� ����
			if (checking(index)) chess(index + 1, N);
			//i�� ä�� ���
			queen[index] = -1;
		}
	}
}

int main() {
	int N = 0;
	cin >> N;

	chess(0, N);
	cout << cnt;
	return 0;
}