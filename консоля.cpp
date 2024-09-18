#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int money;

	cout << "Это Баккомат 2." << endl << "------------------------" << endl << "Она может выдать купюры достоинством от 100р до 5000р"
		<< endl << "И общей суммой до 150000р." << endl << endl << "Введите желаемую сумму: ";
	cin >> money;

	if (money < 1 || money > 150000) {
		cout << "Ошибка!" << endl;
	}
	else if (money % 100 != 0) {
		cout << "Ошибка" << endl;
	}
	else {
		cout << "----Происходит выдача купюр----" << endl << endl;

		

		if (money % 5000 >= 0 && money >= 5000) {
			cout << "Номинал 5000: " << money / 5000 << " шт." << endl;
			money %= 5000;
			 
		}
		else {}
		if (money != 0 && money % 2000 >= 0 && money >= 2000) {
			cout << "Номинал 2000: " << money / 2000 << " шт." << endl;
			money %= 2000;
		}
		else {}
		if (money != 0 && money % 1000 >= 0 && money >= 1000) {
			cout << "Номинал 1000: " << money / 1000 << " шт." << endl;
			money %= 1000;
		}
		if (money != 0 && money % 500 >= 0 && money >= 500) {
			cout << "Номинал 500: " << money / 500 << " шт." << endl;
			money %= 500;
		}
		else{}
		if (money != 0 && money % 200 >= 0 && money >= 200) {
			cout << "Номинал 200: " << money / 200 << " шт." << endl;
			money %= 200;
		}
		else {}
		if (money != 0 && money % 100 >= 0 && money >= 100) {
			cout << "Номинал 100: " << money / 100 << " шт." << endl;
			money %= 100;
		}
		else {}
	}

}