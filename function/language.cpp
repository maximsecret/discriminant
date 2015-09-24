#include <iostream>
#include <stdlib.h> // Для очистки терминала
#include "functions.hpp"

int st_language_choise(){
  int x;
  wprintf(L"[0] English\n[1] Русский\n");
  std::cin >> x;
  if(x == 1){ return 1;}
  else return 0;
}

void set_text(st_language &language, int lan){
  if(lan == 1){ //Русский язык
    wcscpy(language.intro,L"Вычислитель дискриминанта");
    wcscpy(language.input,L"Введите");
    wcscpy(language.sqr0,L"Вещественных корней нет");
    wcscpy(language.sqr1,L"Один корень");
    wcscpy(language.sqr2,L"2 Корня");
  }
  else if(lan == 0){ //Английский язык
    wcscpy(language.intro,L"Calculate disriminant");
    wcscpy(language.input,L"Input");
    wcscpy(language.sqr0,L"Root is empty");
    wcscpy(language.sqr1,L"1 root");
    wcscpy(language.sqr2,L"2 root");
  }
}


void s_clear(){
  system("clear"); // if Linux}
}
