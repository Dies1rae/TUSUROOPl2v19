#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <tchar.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <algorithm>
#include "office.h"
#include "printer.h"
using namespace std;
#pragma once



int main() {
	setlocale(LC_ALL, "Russian");
	int k = 0;
	set <string> models = { "LJ-700" , "KEYOCERA", "HP-LJ-1251", "GNUSMAS", "PHILIPS", "HZ" };
	Office Second(6);
	for (auto now = models.begin(); now != models.end(); now++) {
		Printer A(k, *now, (float)k + k);
		Second.set_office(k, A);
		k++;
	}
	cout <<Second.get_office_size() << endl;
	Second.get_office();
	double sum = Second.get_office(3);
	cout << sum << endl;
	cout << Second.summ() << endl;
	cout << Second.summ(4) << endl;
	Printer B = Second.get_office(4);
	Printer C = Second[1];
	B.get_prn();
	C.get_prn();
	cout << Second[2] + Second[3];
	return 0;
}