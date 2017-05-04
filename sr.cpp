#include <iostream>
#include "sr.hpp"

using namespace std;

int Numb::my_nod(int n, int m)
{
	if(n==0 || m==0)
		cout << "Введит не ноль, пожалуйста." << endl;
	for ( int i = n; i > 0; i--) {
		if ( (n%i == 0) && (m%i == 0) ) {
		cout << "Нерекурсивно: nod = " << i << endl;
		break;
		}
	}
	return 0;
}

int Numb::rek_nod(int n, int m)
{
	if(m == 0)
		return n;
	if(n == 0)
		return m;
	if(m==n)
  		return n;
	if(n>m) 
		return rek_nod(m, n - m);
	else if(m>n)
		return rek_nod(n, m - n);
}

int Numb::go()
{
	int buff;
	Numb num;
	cin >> num;
	num.my_nod(num.n, num.m);
	buff = num.rek_nod(num.n, num.m);
	cout << "Pекурсивно: nod = " << buff << endl;
	return 0;
}

istream& operator >> (istream& in, Numb& z)
{
	cout << "Введите 2 числа" << endl;
	cin >> z.n >> z.m;
	return in;
}
