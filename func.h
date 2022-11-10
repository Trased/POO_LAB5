#pragma once
// exemplu: cuvantul cheie this
#include<iostream>
using namespace std;
class Complex {
	int re, im;
public:
	Complex();
	Complex(int re, int im);
	void afisare();
	int egal(Complex a);
	void citire();
	void operator=(Complex num);
};


class MultimeComplexe {
	Complex* multime;
	int dim; // dim max;
	int n; // nr actual;
public:
	MultimeComplexe();
	MultimeComplexe(const MultimeComplexe& m);
	~MultimeComplexe();
	void adauga(Complex num);
	void extrage(Complex num);
	void afisare();
};