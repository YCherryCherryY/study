#include <iostream>
#include "functions.h"
void error() {
	std::cout << "��������� ����������� ������.";
}
int main() {
	setlocale(LC_ALL, "rus");
<<<<<<< HEAD
	int c = 0;
=======
	int a = 0;
>>>>>>> test_two
	float m1[3][3], m2[3][3], res[3][3];

	//�������������� ���������
	std::cout << "1. �������� ������" << std::endl;
	std::cout << "2. ��������� ������" << std::endl;
	std::cout << "3. ��������� ������� �� �����" << std::endl;
	std::cout << "������� ����� ��������, ������� ���������� �������� � ���������:";
	//���� � ����������
<<<<<<< HEAD
	std::cin >> c;
	//������ �� ��������� �����
	while (c != 1 && c != 2 && c != 3) {
=======
	std::cin >> a;
	//������ �� ��������� �����
	while (a != 1 && a != 2 && a != 3) {
>>>>>>> test_two
		std::cout << "��� �� ����� ��������, ���������� �������� ���� �� ��� �������:" << std::endl;
		std::cout << "1. �������� ������" << std::endl;
		std::cout << "2. ��������� ������" << std::endl;
		std::cout << "3. ��������� ������� �� �����" << std::endl;
<<<<<<< HEAD
		std::cin >> c;
	}
	if (c == 1) {
=======
		std::cin >> a;
	}
	if (a == 1) {
>>>>>>> test_two
		std::cout << "������� ������� ��� �� ������������" << std::endl;
		std::cout << "������ �������: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m1[i][j];
		}
		std::cout << "������ �������: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m2[i][j];
		}
		plus(m1, m2);
	}
<<<<<<< HEAD
	else if (c == 2) {
=======
	else if (a == 2) {
>>>>>>> test_two
		std::cout << "������� ������� ��� ���������� �� ��������" << std::endl;
		std::cout << "������ ������� �� ������� ��������: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m1[i][j];
		}
		std::cout << "������ �������, ������� ��������: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m2[i][j];
		}
		minus(m1, m2);
	}
<<<<<<< HEAD
	else if (c == 3) {
=======
	else if (a == 3) {
>>>>>>> test_two
		float a;
		std::cout << "������� ������� ��� ��������� �� �����: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m1[i][j];
		}
		std::cout << "������� ����� �� ������� ���������� �������� �������: ";
		std::cin >> a;
		power(m1, a);
	}
	else error();
	system("pause");
	return 0;
}