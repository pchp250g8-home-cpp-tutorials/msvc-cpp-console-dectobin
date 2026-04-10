// DecToBin.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    const unsigned int MAX_INT = _UI32_MAX;
    long uDecNum,uTempVal;
    std::string strBinNum;
    std::cout << "Input an unsigned integer number\r\n";
    std::cin >> uDecNum;
    if (uDecNum < 0 or uDecNum > MAX_INT)
    {
        std::cout << "Inorrect number format\r\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }
    uTempVal = uDecNum;
    while (uTempVal > 0)
    {
        char chDighit = static_cast<char>((uTempVal % 2) + '0');
        strBinNum = chDighit + strBinNum;
        uTempVal /= 2;
    }
    if (strBinNum.empty()) strBinNum = "0";
    std::cout << "The binary equivalent of the decimal number " << uDecNum << " is:"
        << strBinNum << "\r\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
