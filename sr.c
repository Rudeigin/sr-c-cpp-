#include <stdio.h>
/*
	Рекурсивная функция НОДа
*/
int rek_nod(int n, int m)
{
	if(m == 0)
		return n;
	if(n == 0)
		return m;
	if(m==n)
  		return n;
	if(n>m) {
		return rek_nod(m, n - m);
	}
	else if(m>n) {
		return rek_nod(n, m - n);
		}
}
/*
	Нерекурсивная функция НОДа
*/
int my_nod(int n, int m)
{
	int i;
	if(n==0 || m==0) 
		printf("На ноль не делят, логично же.\n");
	for (i = n; i > 0; i--) {
		if ( (n%i == 0) && (m%i == 0) ) {
		printf("Нерекурсивно: nod(%d, %d) = %d \n", n, m, i);
		break;
		}
	}
	return 0;
}

int main()
{
	int no, m, n;
	printf ("Введите два натуральных числа:\n");
	scanf ("%d %d", &n, &m);
	my_nod(n, m);  //Нахождение нерекурсивно
	no=rek_nod(n,m); //Нахождение рекурсивно
	printf("Рекурсивно: nod(%d, %d)= %d \n", n, m, no);
	return 0;
}

