#include <iostream>
#include "functions.h"
void error() {
	std::cout << "��������� ����������� ������.";
}
int main() {
	setlocale(LC_ALL, "rus");
	int a = 0;
	float m1[3][3], m2[3][3], res[3][3];

	//�������������� ���������
	std::cout << "1. �������� ������" << std::endl;
	std::cout << "2. ��������� ������" << std::endl;
	std::cout << "3. ��������� ������� �� �����" << std::endl;
	std::cout << "������� ����� ��������, ������� ���������� �������� � ���������:";
	//���� � ����������
	std::cin >> a;
	//������ �� ��������� �����
	while (a != 1 && a != 2 && a != 3) {
		std::cout << "��� �� ����� ��������, ���������� �������� ���� �� ��� �������:" << std::endl;
		std::cout << "1. �������� ������" << std::endl;
		std::cout << "2. ��������� ������" << std::endl;
		std::cout << "3. ��������� ������� �� �����" << std::endl;
		std::cin >> a;
	}
	if (a == 1) {
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
	else if (a == 2) {
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
	else if (a == 3) {
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