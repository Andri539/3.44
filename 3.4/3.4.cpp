#include <iostream>
#include <cmath> 

using namespace std;


bool isPointInShadedArea(double x, double y, double R) {
	
	bool inSemiCircle = (pow(x + R, 2) + pow(y, 2) <= pow(R, 2)) && (x <= 0);

	
	bool inRectangle = (y <= 0) && (y >= -R) && (x >= 0) && (x <= 2 * R);

	
	return inSemiCircle || inRectangle;
}

int main() {
	double x, y, R;

	
	cout << "������ ���������� x: ";
	cin >> x;
	cout << "������ ���������� y: ";
	cin >> y;
	cout << "������ ����� R: ";
	cin >> R;

	
	if (isPointInShadedArea(x, y, R)) {
		cout << "����� �������� ����������� ������ (Yes)." << endl;
	}
	else {
		cout << "����� �� �������� ����������� ������ (No)." << endl;
	}

	
	cout << "�������� ����-��� ������ ��� ������..." << endl;
	system("pause"); 
	return 0;
}
