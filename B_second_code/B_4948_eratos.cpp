#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N = 0;
	while (true) {
		cin >> N;
		if (N == 0) break;

		vector<bool> prime(246913, true);
		prime[0] = false;
		prime[1] = false;
		

		//vector�� �����佺�׳׽��� ü�� �̿���
		//prime number�� �ƴ� ���� false�� �ٲٱ�
		for (int i = 2; i <= 2 * N; i++) {
			if (prime[i] == true) {
				for (int j = 2*i; j <= 2 * N; j+=i) {
					prime[j] = false; 
				}
			}
		}
			   
		int cnt = 0;
		for (int i = N+1; i <= 2 * N; i++) {
			if (prime[i] == true) { ++cnt; }
		}
		cout << cnt << "\n";
	}
	return 0;
}