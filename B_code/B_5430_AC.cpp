#include<iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);

	int T = 0;
	cin >> T;
	while (T--) {
		//��ɾ�
		string commend = "";
		cin >> commend;

		//�迭�� ����
		int N = 0;
		cin >> N;

		//�迭�� ����
		string number = "";
		cin >> number;
		
		//�Է¹��� ���� deque�� �Է�
		deque<int> dq;
		if (N != 0) {
			string temp = "";
			for (unsigned int i = 1; i < number.size(); i++) {
				if (number[i] == ',' || number[i] == ']') {
					dq.push_back(stoi(temp));
					temp = "";
				}
				else {
					temp += number[i];
				}
			}
		}
		//��ɾ ���� �ൿ ��ȭ
		bool errorFlag = false;
		bool didReverse = false;
		for (int i = 0; i < commend.size(); i++) {
			if (commend[i] == 'R') didReverse = !didReverse;
			else if (commend[i] == 'D') {
				if (dq.empty()) {
					errorFlag = true;
					cout << "error\n";
					break;
				}
				else {
					//������ ������ ���
					if (didReverse) {
						dq.pop_back();
						--N;
					}
					//�������� ���� ������ ���
					else {
						dq.pop_front();
						--N;
					}
				}
			}
		}

		if (!errorFlag) {
			cout << "[";
			if (!dq.empty()) {
				if (didReverse) {
					for (int i = 0; i < N - 1; i++) {
						cout << dq.back() << ",";
						dq.pop_back();
					}
					cout << dq.back();
				}
				else {
					for (int i = 0; i < N - 1; i++) {
						cout << dq.front() << ",";
						dq.pop_front();
					}
					cout << dq.front();
				}
			}
			cout << "]\n";
		}
	}
	return 0;
}