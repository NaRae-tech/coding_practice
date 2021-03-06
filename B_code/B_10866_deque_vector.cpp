#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	vector<int> dq;
	string commend = "";
	int a = 0;
	while (N--) {
		cin >> commend;
		if (commend == "push_front") {
			cin >> a;
			dq.insert(dq.begin(),a);
		}
		else if (commend == "push_back") {
			cin >> a;
			dq.push_back(a);
		} 
		else if (commend == "pop_front") {
			if(dq.empty()) cout<<-1<<"\n";
			else {
				cout << dq.front() << "\n";
				dq.erase(dq.begin());
			}
		}
		else if (commend == "pop_back") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.back() << "\n";
				dq.erase(dq.end()-1);
			}
		}
		else if (commend == "size") {
			cout << dq.size() << "\n";
		}
		else if (commend == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (commend == "front") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.front() << "\n";
			}
		}
		else if (commend == "back") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.back() << "\n";
			}
		}
	}
	return 0;
}