#include <iostream>

using namespace std;

double lesFlyttTall(int a,int b);

int main() {
	int inn;
	int kurs;
	//double tall = lesFlyttTall(kurs, inn);

	cout << "Skriv inn kurs:" << endl;
	cin >> kurs;

	cout << "Hvor mye skal du veksle?" << endl;

	cin >> inn;

	cout << lesFlyttTall(kurs, inn);

	system("Pause");

	return 0;
}

double lesFlyttTall(int a, int b) {

	double res;

	res = b * 100 / a;



	return res;

}
