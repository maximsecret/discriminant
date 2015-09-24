#include <iostream>
#include <cmath> // Нужна для вычисления квадратного корня

#include "functions.hpp"

inline void inp_num(int &a ,st_language language,wchar_t* t_a){
    wprintf(L"%ls %s: ",language.input,t_a);
    std::cin >> a;
}

inline void d_intro(st_language language){
    wprintf(L"%ls alpha\n",language.intro);
}

void discr(st_language language){
    int a,b,c;
    float d,x1,x2;
    wchar_t i[1];//Временная переменная, для указания a,b,c

    d_intro(language);
    //Как работает
    wprintf(L"ax^2 + bx + c = 0\na=?  b=?  c=?\n");
    //Вводим переменные
    inp_num(a,language,wcscpy(i,L"a"));
    inp_num(b,language,wcscpy(i,L"b"));
    inp_num(c,language,wcscpy(i,L"c"));

    s_clear(); // Чистим терминал
    d_intro(language);
    //Вычисляем дискриминант
    d = b*b - 4 * a * c  ;

    wprintf(L"ax^2 + bx + c = 0\na=%i  b=%i  c=%i\n",a,b,c);
    wprintf(L"d = %F\n",d);


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
