#include <iostream>
#include <stdlib.h> // Для очистки терминала
#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"

int st_language_choise(){
  int x;
  wprintf(L"[0] English\n[1] Русский\n");
  while(1){
  if(std::cin >> x){
    if(x == 1){ return 1;}
    if(x == 0) return 0;
    else{
      wprintf(L"Try again: ");
    std::cin.clear();
    while(std::cin.get() != '\n') ;
        }
    }
}}
bool check_config(st_language &language){
    std::string line;
    std::ifstream in("config.ini",std::ifstream::binary);
    if(!in){
        return false;
    }
    getline(in,line);
    in.close();
    if(line=="ru"){
        set_text(language,1);
        return true;
    }
    else if (line=="en") {
        set_text(language,0);
        return true;
    }

    return false;
}
void create_config(int i){
    std::ofstream out("config.ini",std::ofstream::binary);

    char ru[2] = {'r','u'};
    char en[2] = {'e','n'};

    if(i==1){
        out.write(ru,2);
    }
    if(i==0){
        out.write(en,2);
    }
}

void set_text(st_language &language, int lan){
  if(lan == 1){ //Русский язык
    wcscpy(language.intro,L"Вычислитель дискриминанта");
    wcscpy(language.input,L"Введите");
    wcscpy(language.error,L"Неправильное значение, попробуйте ещё раз: ");
    wcscpy(language.sqr0,L"Вещественных корней нет");
    wcscpy(language.sqr1,L"Один корень");
    wcscpy(language.sqr2,L"2 Корня");
  }
  else if(lan == 0){ //Английский язык
    wcscpy(language.intro,L"Calculate disriminant");
    wcscpy(language.input,L"Input");
    wcscpy(language.error,L"Invalid number, try again: ");
    wcscpy(language.sqr0,L"Root is empty");
    wcscpy(language.sqr1,L"1 root");
    wcscpy(language.sqr2,L"2 root");
  }
}

#ifdef _WIN32
void s_clear(){
  system("cls"); // if Windows
}
#else
void s_clear(){
  system("clear"); // if Other
}
#endif
