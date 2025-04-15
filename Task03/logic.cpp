//	[The Odd Count of Digits]
//	Нечётное количество цифр
//
//	Необходимо разработать рекурсивную функцию, которая проверяет,
//	состоит ли заданное пользователем число только из нечётного 
//	количества цифр или нет. 
//	
//	У числа 1234 – количество цифр чётное (even), 
//	а у числа 12345 – количество цифр нечётное (odd). 
// 
//	Число может быть как положительным, так и отрицательным.

#include "logic.h"

bool is_digits_count_odd(long long number) {

	if (number <  0) {
		number *= -1;
	}
	
	if (number < 10 && number > -10) {
		return true;
	}

	int count = 1;
	for (int i = 0; i < number; i ++) {
		number /= 10;
		count++;
	}
	cout << count << "   ";

	return count % 2 == 1 && is_digits_count_odd(number / 10);
}
