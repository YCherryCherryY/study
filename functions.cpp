#include "functions.h"
#include <iostream>

void plus(float arr1[3][3], float arr2[3][3]) { //�������� ������
	setlocale(LC_ALL, "rus");
	float arr[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) arr[i][j] = arr1[i][j] + arr2[i][j];
	std::cout << "����� ����� ������: " << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
}
void minus(float arr1[3][3], float arr2[3][3]) {
	setlocale(LC_ALL, "rus");
	float arr[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) arr[i][j] = arr1[i][j] - arr2[i][j];
	std::cout << "����� �������� ������: " << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
}
void power(float arr[3][3], float a) {
	setlocale(LC_ALL, "rus");
	float mat[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) mat[i][j] = arr[i][j] * a;
	std::cout << "����� ������������ ������� � �����: " << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) std::cout << mat[i][j] << " ";
		std::cout << std::endl;
	}
}