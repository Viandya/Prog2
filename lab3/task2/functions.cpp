#include «functions.h»

int sumArray(const int* begin, const int* end)
{
    int result = 0;
    for (const int* p = begin; p != end; ++p) // end указывает за последний элемент
    {
        result += *p;
    }
    return result;
}

int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

Operation getOperation(char op)
{
    if (op == ‘+’)
    {
        return sum;
    }
    if (op == ‘-‘)
    {
        return difference;
    }
    return nullptr; // неизвестный символ
}
