#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int fixed = 0;
	int variable = 0;
	int cost = 0;
	cin >> fixed >> variable >> cost;

	//���� �б����� �������� ����
	if (variable >= cost) cout << "-1";
	else {
		//������ �� == ���� => ���� �غ��� ���� �߻�
		//������ �� < ���� => �� �غ��� ���� �߻�
		//�Ѵ� �Ҽ��� ���� +1 
		cout << fixed / (cost - variable) + 1;
	}
	return 0;
}