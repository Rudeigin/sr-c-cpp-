#include <iostream>

using namespace std;

class Numb {
private:
	int n;
	int m;
public:
	int rek_nod(int n, int m);//Рекурсивно
	int my_nod(int n, int m);//Нерекурсивно
	int go();
	
	friend istream& operator >> (istream& in, Numb& z);
};
