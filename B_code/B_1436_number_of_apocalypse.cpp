#include <iostream>
#include <string>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int now = 665;

	
	int serise = 0;

	while (true) {
		string test = to_string(now);
		//find�� �ش� ���ڿ��� ���۵Ǵ� ��ġ
		if (test.find("666")!=-1) {
			serise++;
		}
		if (serise == N) {
			cout << test << "\n";
			break;
		}
		now++;
	}
	return 0;
}