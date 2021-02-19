#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N = 0;
	int M = 0;
	int K = 0;
	cin >> N >> M >> K;

	vector<int> numbers;
	for (int i = 0; i < N; i++) {
		int a = 0;
		cin >> a;
		numbers.push_back(a);
	}
	sort(numbers.begin(), numbers.begin() + N, greater<int>());

	//�ִ� ���ڰ� K��, �� ���� ū���� 1�� ������ Ƚ�� K+1
	//M�� K+1�� ������ ���
	int count = int(M / (K + 1))*K;
	//M�� K+1�� �������� ���� ���
	count += M % (K + 1);

	int result = 0;
	result += count * numbers[0];
	result += (M - count)*numbers[1];

	cout << result;
	return 0;
}