#include <iostream>
#include <locale> // Нужна для поддержки UTF-8
#include <stdlib.h> // Для паузы на винде


#include "function/functions.hpp"

int main(int argc, char* argv[] )
{
    int s_empty;
    setlocale(LC_ALL,""); // Включаем UTF-8
    s_clear();
    struct st_language language; //Создаем переменные с текстами.
    set_text(language,st_language_choise()); // Устанавливаем текст
    s_clear();

    while(1){
    if(argv[2]){

    discr(language);
    #ifdef _WIN32
    system("pause");
    #endif
    break;
  }
    else{
      discr(language);
      #ifdef __linux__
      std::cin >> s_empty;
      #elif _WIN32
      system("pause");
      #else
      #endif
      s_clear();
    }
}
    return 0;
}
