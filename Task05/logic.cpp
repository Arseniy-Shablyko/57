﻿//	[The Sum of Absolute Values of Negative Elements]
//	Сумма абсолютных значений отрицательных элементов 
//
//	Задан вектор целочисленных значений. Необходимо разработать 
//	функцию, которая с помощью рекурсивного алгоритма вычисляет 
//	сумму отрицательных элементов массива, взятых по модулю, 
//	т.е. по абсолютному значению.
//
//	Если данные вектора заданы некорректно, то функция должна 
//	возвратить 0.

#include "logic.h"

int sum_absolute_values_of_negative_elements(int* array, int size) {
	if (size <= 0 || !array) {
		return 0;
	}

	if (size == 1) {
		return (array[0] < 0 ? -array[size] : 0);
	}

	size--;
	int element = array[size];
	element = element < 0 ? -element : 0;
	return element + sum_absolute_values_of_negative_elements(array, size);
}
