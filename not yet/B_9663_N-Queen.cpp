#include <iostream>
using namespace std;

int column[16];
int cnt = 0;
bool check(int r) {
	//column�迭�� �����͵�� �ٸ� ������
	//column �迭�� ���� �� ��� �밢���� �ƴ���
	//Ȯ���ؼ� ����� return 
	bool flag = true;
	for (int i = 0; i < r; i++) {
		//1��~���� Ȯ���Ϸ��� �� �ٷ� ���������� column�� ����
		//���� column[r]�� ���� ���� ���Ͽ� ����Ȯ��
	}
	return flag;
}
void bfs(int row, int N) {
	// �ప�� �Ķ���ͷ� �ް�
	// ������ for�����̿��ؼ� �ȿ��� ���
	if (check(row)) {
		if (row == N) {
			++cnt;
		}
		else {
			for (int i = 0; i < N; i++) {

			}
		}
	}
}
int main() {
	int N = 0;
	cin >> N;
	bfs(0,N);
	return 0;
}