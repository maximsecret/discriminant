#include <iostream>
#include <locale> // Нужна для поддержки UTF-8
#include <stdlib.h> // Для паузы на винде


#include "function/functions.hpp"

int main()
{
    setlocale(LC_ALL,""); // Включаем UTF-8
    s_clear();
    struct st_language language; //Создаем переменные с текстами.

    if(check_config(language) == true){
    }else{
        create_config(st_language_choise());
        check_config(language);
    }
    s_clear();

    while(1){
    Dmain(language);
    #ifdef __linux__
    system("echo \n\n");
    #elif _WIN32
    system("pause");
    #else
    #endif
    }
}
