#pragma once

// Указатель на функцию, принимающую два int и возвращающую int
using Operation = int (*)(int, int);

// 1. Сумма элементов массива по указателям на начало и конец
int sumArray(const int* begin, const int* end);

// 3. Сумма и разность
int sum(int a, int b);
int difference(int a, int b);

// 4-5. Возвращает указатель на функцию суммы (‘+’) или разности (‘-‘)
Operation getOperation(char op);
