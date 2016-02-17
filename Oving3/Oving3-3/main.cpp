#include <iostream>
#include <string>
#include <map>

//http://www.codeguru.com/cpp/cpp/cpp_mfc/article.php/c4067/Switch-on-Strings-in-C.htm

using namespace std;

double veksle(int a, int b);
char YN;
int inn;
int kurs;

string valutakode;

int main() {

	cout << "Skriv inn kurs:" << endl;

	cin >> kurs;

	cout << "Skal det beregnes FRA Norske kronasjer? J/N" << endl;

	cin >> YN;

	cout << "Hva er koden til valutaen du vil regne med? Eks. NOK, USD, GBP" << endl;

	cin >> valutakode;

	YN = tolower(YN);

	switch (YN)
	{

	case 'j':

		switch ((valutakode))
		{
		case "gbp":
			break;
		default:
			break;
		}

		cout << "Oppgi ønsket beløp i norske kronasjer:" << endl;

		cin >> inn;

		cout << "Det blir " << veksle(inn, kurs) << " i fremmed valuta." << endl;

		break;

	case 'n':

		cout << "Oppgi ønsket beløp i fremmed valuta:" << endl;

		cin >> inn;

		cout << "Det blir " << veksle(inn, kurs) << " i norske kronasjer." << endl;

		break;

	default:
		cout << "Kun J/N!";
		break;
	}

	cout << endl;

	system("Pause");

	return 0;
}

double veksle(int a, int b) {
	switch (YN)
	{

	case 'j':

		return a * 100 / b;

		break;

	case 'n':

		return a * b / 100;

		break;
	}
}