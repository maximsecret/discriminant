#include <iostream>
#include <cmath> // Нужна для вычисления квадратного корня
#include <string.h>
#include <stdio.h>

#include "functions.hpp"

int inp_num(int &a,st_language language){
  while(1){
  if(std::cin >> a){
    break;
  } else {
    wprintf(L"%ls",language.error);
    std::cin.clear();
    while(std::cin.get() != '\n') ;
  }
}
  return 0;
}

inline void d_intro(st_language language){
    wprintf(L"%ls alpha\n",language.intro);
}

void discr(st_language language){
    int a,b,c;
    float d,x1,x2;
    //char i[2]="a";//Временная переменная, для указания a,b,c

    d_intro(language);
    //Как работает
    wprintf(L"ax^2 + bx + c = 0\n");
    wprintf(L"a=?  b=?  c=?\n");
    wprintf(L"d = b**2 - 4 * a * c\n");
    //Вводим переменные
    wprintf(L"%ls %ls: ",language.input,L"a");
    inp_num(a, language);

    wprintf(L"%ls %ls: ",language.input,L"b");
    inp_num(b, language);

    wprintf(L"%ls %ls: ",language.input,L"c");
    inp_num(c, language);

    s_clear(); // Чистим терминал
    d_intro(language);
    //Вычисляем дискриминант
    d = b*b - 4 * a * c  ;
    wprintf(L"ax^2 + bx + c = 0\na=%i  b=%i  c=%i\n",a,b,c);
    wprintf(L"d = %i**2 - 4 * %i * %i [--->] %i - 4 * %i [--->] %i - %i [--->] %i\n",b,a,c,b*b,a*c,b*b,4*a*c,b*b-4*a*c);
    wprintf(L"D = %F\n",sqrt(d));


    if(d > 0){ // 2 Корня.
      wprintf(L"%ls:\n",language.sqr2);

      //language.input
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);

      wprintf(L"x1 = %F\n",x1);
      wprintf(L"x2 = %F\n",x2);
    }
    else if(d == 0){ // Один корень.
      wprintf(L"%ls:\n",language.sqr1);
      //x1 = ((-b) / (2*a));
      x1 = 0;
      wprintf(L"x = %F\n",x1);
    }
    else{ // Вещественных корней нет
      wprintf(L"%ls.\n",language.sqr0);
    }


    //wprintf(L"a = %i\nb = %i\nc = %i\n",a,b,c);

}
