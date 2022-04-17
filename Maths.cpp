#include <iostream>
#include "functions.h"
void error() {
	std::cout << "Произошла неизвестная ошибка.";
}
int main() {
	setlocale(LC_ALL, "rus");
<<<<<<< HEAD
	int c = 0;
=======
	int a = 0;
>>>>>>> test_two
	float m1[3][3], m2[3][3], res[3][3];

	//Информационное сообщение
	std::cout << "1. Сложение матриц" << std::endl;
	std::cout << "2. Вычитание матриц" << std::endl;
	std::cout << "3. Умножение матрицы на число" << std::endl;
	std::cout << "Введите номер операции, которую необходимо провести с матрицами:";
	//Ввод с клавиатуры
<<<<<<< HEAD
	std::cin >> c;
	//Защита от неверного ввода
	while (c != 1 && c != 2 && c != 3) {
=======
	std::cin >> a;
	//Защита от неверного ввода
	while (a != 1 && a != 2 && a != 3) {
>>>>>>> test_two
		std::cout << "Это не номер операции, пожалуйста выберите одну из трёх оперций:" << std::endl;
		std::cout << "1. Сложение матриц" << std::endl;
		std::cout << "2. Вычитание матриц" << std::endl;
		std::cout << "3. Умножение матрицы на число" << std::endl;
<<<<<<< HEAD
		std::cin >> c;
	}
	if (c == 1) {
=======
		std::cin >> a;
	}
	if (a == 1) {
>>>>>>> test_two
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
<<<<<<< HEAD
	else if (c == 2) {
=======
	else if (a == 2) {
>>>>>>> test_two
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
<<<<<<< HEAD
	else if (c == 3) {
=======
	else if (a == 3) {
>>>>>>> test_two
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