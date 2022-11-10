#include "func.h"
int main() {
	int i = 1;
	MultimeComplexe A;
	Complex num;
	while (i)
	{
		unsigned int k;
		cout << "Introduceti: \n 0 - iesire program \n 1 - adaugare element \n 2 - extragere element \n 3 - afisare multime \n\n k=";
		cin >> k;
		if (k > 3)
		{
			cout << "introducere eronata, incercati din nou\n k= ";
			cin >> k;
		}
		switch (k) {
		case 0:
			i = 0;
			break;
		case 1:
			num.citire();
			A.adauga(num);
			break;
		case 2:
			num.citire();
			A.extrage(num);
			break;
		case 3:
			A.afisare();
		}
	}
	return 0;

}
