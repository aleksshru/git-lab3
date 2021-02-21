#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
double summ(int n);
double summ2(double eps);
void print(int n, int k);
int findFirstElement(double eps);
int findFirstNegativeElement(double eps);
int main()
{
	int k, n;
	double eps;
	setlocale(LC_ALL, "Russian");
eror:
	cout << "1. Задание 1" << endl << "2. Задание 2" << endl << "3. Задание 3" << endl << "4. Задание 4" << endl << "5. Задание 5" << endl << "6. Выход" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
		cout << "Введите кол-во слагаемых" << endl << "n = ";
		cin >> n;
		cout << "Summ = " << summ(n);
		break;
	case 2:
		cout << "Введите точность" << endl << "eps = ";
		cin >> eps;
		cout << "Summ = " << summ2(eps);
		break;
	case 3:
		cout << "Введите кол-во членов последовательности" << endl << "n = ";
		cin >> n;
		cout << "Введите кол-во членов последовательности" << endl << "k = ";
		cin >> k;
		print(n, k);
		break;
	case 4:
		cout << "Введите точность" << endl << "eps = ";
		cin >> eps;
		cout << "k = " << findFirstElement(eps);
		break;
	case 5:
		cout << "Введите точность" << endl << "eps = ";
		cin >> eps;
		cout << "k = " << findFirstNegativeElement(eps);
		break;
	case 6:
		break;
	default:
		goto eror;
	}
}
