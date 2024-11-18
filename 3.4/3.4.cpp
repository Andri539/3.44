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

	
	cout << "Введіть координату x: ";
	cin >> x;
	cout << "Введіть координату y: ";
	cin >> y;
	cout << "Введіть радіус R: ";
	cin >> R;

	
	if (isPointInShadedArea(x, y, R)) {
		cout << "Точка належить зафарбованій області (Yes)." << endl;
	}
	else {
		cout << "Точка НЕ належить зафарбованій області (No)." << endl;
	}

	
	cout << "Натисніть будь-яку клавішу для виходу..." << endl;
	system("pause"); 
	return 0;
}
