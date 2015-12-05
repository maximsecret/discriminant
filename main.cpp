#include <iostream>
#include <locale> // Нужна для поддержки UTF-8
#include <stdlib.h> // Для паузы на винде


#include "function/functions.hpp"

int main()
{
    s_clear();
    setlocale(LC_ALL,""); // Включаем UTF-8
    struct st_language language; //Создаем переменные с текстами.
    set_text(language,st_language_choise()); // Устанавливаем текст
    s_clear();
    discr(language);
    // Only Windows
    /*
    int r;
    std::cin >> r;
    */
    #ifdef _WIN32
    system("pause");
    #endif

    return 0;
}
