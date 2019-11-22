#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
#pragma once



class Printer {
private:
	string model;
	int num;
	float summ;
public:
	Printer(int a, string b, float d) {
		num = a;
		model = b;
		summ = d;
	}
	Printer() {
		num = 0;
		model = "";
		summ = 0.0;
	}
	void get_prn() {
		cout << "╧ - " << setw(4) << num << " | " << "лндекэ - " << setw(15) << model << " | " << "ясллю -  " << setw(4) << summ << " | " << endl;
	}

	void set_prn(int a, string b, float d) {
		num = a;
		model = b;
		summ = d;
	}
	void set_prn() {
		cin >> num;
		cin >> model;
		cin >> summ;
	}

	friend double operator+(Printer& p1, Printer& p2) {
		return p1.summ + p2.summ;
	}

	operator double() {
		return this->summ;
	}
};
