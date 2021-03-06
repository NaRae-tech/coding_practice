#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	
	queue<int>q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.pop();
		if (q.size() == 1) { break; }
		else {
			q.push(q.front());
			q.pop();
		}
	}

	cout << q.front() << "\n";
	return 0;
}