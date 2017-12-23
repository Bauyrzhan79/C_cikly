#include <iostream>
#include <locale.h>


using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");

	//1.	Каждая бактерия делится на две в течение одной минуты. В начальный момент имеется одна бактерия. 
	//Составьте программу, которая рассчитывает количество бактерий на заданное вами целое значение момента времени (15 минут, 7 минут и т.п.)
	/*
	int bact = 1, i, time;
	cout << "Введите время: ";
	cin >> time;
	for (i = 1; i < time; i++) {
		bact *= 2;
	}
	cout << "Количество бактерий за " << i << " минут - " << bact << endl;
	*/

	//6.	Написать программу поиска суммы последовательности положительных чисел, вводимых с клавиатуры, предшествующих первому введенному нулю. 
	//Контрольный пример: 1,2,3,-4,5,-2,0
	/*
	int i = 0, n, sum = 0;
	do {
		cout << "Введите число: ";
		cin >> n;
		if (n > 0) {
			i++;
			sum += n;
		}
	} while (n != 0);
	cout << "Сумма положительных чисел - " << sum << endl;
	cout << "Количество положительных чисел - " << i << endl;
	*/

	//7.	Ежемесячная стипендия студента составляет А тенге., а расходы на проживание превышают ее и составляют B тенге. в месяц. 
	//Рост цен ежемесячно увеличивает расходы на 3%. Определить, какую нужно иметь сумму денег, чтобы прожить учебный год (10 месяцев), используя только эти деньги и стипендию 
	
	float stipendia, raskhody, infl = 0.03, sum = 0;
	float sum_raskhody = 0, sum_stipendia = 0;
	int mes = 10;
	cout << "Введите размер стипендии: ";
	cin >> stipendia;
	cout << "Введите ежемесячную сумму расхода: ";
	cin >> raskhody;
	sum_raskhody = raskhody;
	for (int i = 0; i < 10; i++) {
		
		sum_stipendia = sum_stipendia + stipendia;
		if (i != 0) {
			sum_raskhody = sum_raskhody + infl*sum_raskhody;
			sum_raskhody += sum_raskhody;
		}

	}
	cout << "Na 10 mes neobkhodimo - " << sum_raskhody << endl;
	cout << sum_stipendia << endl;

	system("pause");
}