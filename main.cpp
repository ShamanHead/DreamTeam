#include <iostream>
#include "Calculator/Calculator.h"
#include "Time/Time.h"
#include "BinarySystem/BinarySystem.h"

void main() {
	int choose = 0;

	setlocale(LC_ALL, "ru");

	while (choose != -1) {
		printf(
			"Вас приветсвует супер классный просто пушечка проект DreamTeam от не менее классной команды, у которой кстати названия нет\n"
			"В общем вот варианты использования:\n"
			"1. Вводите число, а вам программа выводит то же число, но по-другому\n"
			"2. Просто показывает время\n"
			"3. Считает циферки за вас\n"
			"-1. Выйти из шедевральной программы\n"
		);
		std::cin >> choose;
		switch (choose) {
			case 1 :
				binaryto();
				break;
			case 2:
				time();
				break;
			case 3:
				calculate();
				break;
			case -1:
				exit;
				break;
		}
	}
}