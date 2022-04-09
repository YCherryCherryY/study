#include <iostream>
#include "functions.h"
void error() {
	std::cout << "Произошла неизвестная ошибка.";
}
int main() {
	setlocale(LC_ALL, "rus");
	int n = 0;
	float m1[3][3], m2[3][3], res[3][3];

	//Информационное сообщение
	std::cout << "1. Сложение матриц" << std::endl;
	std::cout << "2. Вычитание матриц" << std::endl;
	std::cout << "3. Умножение матрицы на число" << std::endl;
	std::cout << "Введите номер операции, которую необходимо провести с матрицами:";
	//Ввод с клавиатуры
	std::cin >> n;
	//Защита от неверного ввода
	while (n != 1 && n != 2 && n != 3) {
		std::cout << "Это не номер операции, пожалуйста выберите одну из трёх оперций:" << std::endl;
		std::cout << "1. Сложение матриц" << std::endl;
		std::cout << "2. Вычитание матриц" << std::endl;
		std::cout << "3. Умножение матрицы на число" << std::endl;
		std::cin >> n;
	}
	if (n == 1) {
		std::cout << "Введите матрицы для их суммирования" << std::endl;
		std::cout << "Первая матрица: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m1[i][j];
		}
		std::cout << "Вторая матрица: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m2[i][j];
		}
		plus(m1, m2);
	}
	else if (n == 2) {
		std::cout << "Введите матрицы для вычисления их разности" << std::endl;
		std::cout << "Первая матрица из которой вычитают: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m1[i][j];
		}
		std::cout << "Вторая матрица, которую вычитают: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m2[i][j];
		}
		minus(m1, m2);
	}
	else if (n == 3) {
		float a;
		std::cout << "Введите матрицу для умножения на число: " << std::endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) std::cin >> m1[i][j];
		}
		std::cout << "Введите число на которое необходимо умножить матрицу: ";
		std::cin >> a;
		power(m1, a);
	}
	else error();
	system("pause");
	return 0;
}