#include <string>
#include <iomanip>
using namespace std;
#include "printer.h"
#include <iostream>
#pragma once


class Office {

private:
	int size;
	Printer *prn;

public:

	Office(int S) {
		size = S;
		prn = new Printer[this->size];
	}

	~Office() {
		delete[] prn;
	}

	void get_office() {
		for (auto i = 0; i < size; i++) {
			prn[i].get_prn();
		}
	}

	int get_office_size() {
		return size;
	}

	void set_office(int i, Printer& p) {
		this->size = i;
		this->prn[i] = p;
	}

	Printer& get_office(int i) {
		return prn[i];
	}

	double summ() {
		double s = 0;
		double res = 0;
		for (auto i = 0; i < size; i++) {
			s += prn[i].operator double();
		}
		res = s / size;
		return res;
	}
	double summ(int limit) {
		int ptr = 0;
		double s = 0;
		double res = 0;
		for (auto i = 0; i < size; i++) {
			if (limit >= prn[i].operator double()) {
				s += prn[i].operator double();
				ptr++;
			}
		}
		res = s / ptr;
		return res;
	}

	Printer& operator[](int i){
		return prn[i];
	}

};