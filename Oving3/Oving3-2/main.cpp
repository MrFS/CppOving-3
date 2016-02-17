//-----------------------------------------------------
// 
// funk2.cpp
//
// Eksempel på verdioverføring av argumenter
//
#include <iostream>
using namespace std;

int funksjon(int a, int b);

int main()
{
	int tall = 4;

	cout << funksjon(tall + 8, 18);

	system("Pause");

	return 0;
} // main

  //-----------------------------------------------------
int funksjon(
	int a,      // Inn
	int b)      // Inn
{
	a = a + b;
	b = a + 1;
	return b * a;
} // funksjon
