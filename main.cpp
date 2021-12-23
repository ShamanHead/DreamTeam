#include <iostream>
#include "Calculator/Calculator.h"
#include "Time/Time.h"
#include "BinarySystem/BinarySystem.h"

void main() {
	int choose = 0;

	setlocale(LC_ALL, "ru");

	while (choose != -1) {
		printf(
			"��� ����������� ����� �������� ������ ������� ������ DreamTeam �� �� ����� �������� �������, � ������� ������ �������� ���\n"
			"� ����� ��� �������� �������������:\n"
			"1. ������� �����, � ��� ��������� ������� �� �� �����, �� ��-�������\n"
			"2. ������ ���������� �����\n"
			"3. ������� ������� �� ���\n"
			"-1. ����� �� ������������ ���������\n"
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