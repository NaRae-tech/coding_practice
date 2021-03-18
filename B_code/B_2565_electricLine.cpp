#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int T = 0;
	cin >> T;

	vector<vector<int>> point(T,vector<int>(2));
	int A = 0;	int B = 0;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		point[i][0] = A;
		point[i][1] = B;
	}
	sort(point.begin(), point.end());
		
	// �� ���ͷ� ���� ���� i�� ����Ʈ �տ� �ùٸ���
	// �ִ� ������ �����̴�.(�ڽ�����)
	//���⼭ �ùٸ��� �� �� �� ���ڸ�ΰ� �������̿����Ѵٴ� ��
	vector<int> dq(T, 1);
	int maximum = 0;
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < i; j++) {
			if (point[i][1] > point[j][1]) {
				dq[i] = max(dq[i], dq[j] + 1);
			}
		}
		maximum = ((dq[i] > maximum) ? dq[i] : maximum);
	}
	cout << T - maximum << "\n";
	return 0;
}