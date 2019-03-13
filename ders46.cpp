// ders46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double kare(double x);
int main()
{
	double(*fonk)(double);
	fonk = kare;
	double kenar;
	cout << "karenin bir kenarini girin(metre).";
	cin >> kenar;
	cout << "karenin alan :" << (*fonk)(kenar) << "  metre kare" << endl;



	system("pause");
    return 0;
}
double kare(double x) {

	double toplam = x*x;

	return toplam;
}