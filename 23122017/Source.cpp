#include <iostream>
#include <locale.h>


using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");

	//1.	������ �������� ������� �� ��� � ������� ����� ������. � ��������� ������ ������� ���� ��������. 
	//��������� ���������, ������� ������������ ���������� �������� �� �������� ���� ����� �������� ������� ������� (15 �����, 7 ����� � �.�.)
	/*
	int bact = 1, i, time;
	cout << "������� �����: ";
	cin >> time;
	for (i = 1; i < time; i++) {
		bact *= 2;
	}
	cout << "���������� �������� �� " << i << " ����� - " << bact << endl;
	*/

	//6.	�������� ��������� ������ ����� ������������������ ������������� �����, �������� � ����������, �������������� ������� ���������� ����. 
	//����������� ������: 1,2,3,-4,5,-2,0
	/*
	int i = 0, n, sum = 0;
	do {
		cout << "������� �����: ";
		cin >> n;
		if (n > 0) {
			i++;
			sum += n;
		}
	} while (n != 0);
	cout << "����� ������������� ����� - " << sum << endl;
	cout << "���������� ������������� ����� - " << i << endl;
	*/

	//7.	����������� ��������� �������� ���������� � �����., � ������� �� ���������� ��������� �� � ���������� B �����. � �����. 
	//���� ��� ���������� ����������� ������� �� 3%. ����������, ����� ����� ����� ����� �����, ����� ������� ������� ��� (10 �������), ��������� ������ ��� ������ � ��������� 
	
	float stipendia, raskhody, infl = 0.03, sum = 0;
	float sum_raskhody = 0, sum_stipendia = 0;
	int mes = 10;
	cout << "������� ������ ���������: ";
	cin >> stipendia;
	cout << "������� ����������� ����� �������: ";
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