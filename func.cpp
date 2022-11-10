#include "func.h"

Complex::Complex() { re = im = 0; };
Complex::Complex(int re, int im) {
	this->re = re;
	this->im = im;
};
void Complex::afisare() {
	cout << "(" << re << "," << im << ")" << endl;
};
int Complex::egal(Complex c2)
{
	if (this->re == c2.re)
	{
		if (this->im == c2.im)
		{
			return 1;
		}
	}
	return 0;
}

void Complex::citire() {
	cout << "Re= ";
	cin >> this->re;
	cout << "Im= ";
	cin >> this->im;
}
void Complex::operator=(Complex const num) {
	this->im = num.im;
	this->re = num.re;
}

MultimeComplexe::MultimeComplexe()
{
	cout << "Dim max = ";
	cin >> this->dim;
	multime = new Complex[dim];
	int n = 0;
}

MultimeComplexe::~MultimeComplexe()
{
	if (multime != NULL)
	{
		delete[] multime;
	}
}
void MultimeComplexe::adauga(Complex num)
{
	if (n == 0)
	{
		multime[0] = num;
		n++;
	}
	else
	{
		for (int i = 0; i<n; i++)
		{
			int egal = multime[i].egal(num);
			if (egal)
			{
				return;
			}
		}
		multime[n] = num;
		n++;
	}
}
void MultimeComplexe::extrage(Complex num)
{
	if (n == 0)
	{
		cout << "Multimea nu are elemente";
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			int egal = multime[i].egal(num);
			if (egal)
			{
				multime[i] = multime[n];
				n--;
				return;
			}
		}
	}
}
void MultimeComplexe::afisare()
{
	if (n == 0)
	{
		cout << "Multimea nu are elemente";
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			multime[i].afisare();
		}
	}
}
