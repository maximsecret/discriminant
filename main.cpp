#include <iostream>
#include <locale> // Нужна для поддержки UTF-8
#include <cmath> // Нужна для вычисления квадратного корня
#include <stdlib.h> // Для очистки терминала

struct st_language{
    wchar_t intro[30];
    wchar_t input[10];

};
#include "functions.hpp"
int main()
{
    s_clear(0);
    setlocale(LC_ALL,""); // Включаем UTF-8
    struct st_language language; //Создаем переменные с текстами.
    set_text(language); // Устанавливаем текст
    discr(language);
    return 0;
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
    wprintf(L"ax^2+bx+c=0\na=? ; b=? ; c=?\n");
    //Вводим переменные
    inp_num(a,language,wcscpy(i,L"a"));
    inp_num(b,language,wcscpy(i,L"b"));
    inp_num(c,language,wcscpy(i,L"c"));

    s_clear(0); // Чистим терминал
    d_intro(language);
    //Вычисляем дискриминант
    d = b*b - 4 * a * c  ;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    wprintf(L"ax^2+bx+c=0\na=%i ; b=%i ; c=%i\n",a,b,c);
    wprintf(L"d = %F\n",d);
    wprintf(L"x1 = %F\n",x1);
    wprintf(L"x2 = %F\n",x2);

    //wprintf(L"a = %i\nb = %i\nc = %i\n",a,b,c);

}

inline void s_clear(int x){
  if(x==0) system("clear"); // if Linux
  else wprintf(L"-----------\n???????????\n-----------\n");
}

inline void inp_num(int &a ,st_language language,wchar_t* t_a){
    wprintf(L"%ls %s: ",language.input,t_a);
    std::cin >> a;
}

void set_text(st_language &language){
    wcscpy(language.intro,L"Вычислитель дискриминанта");
    wcscpy(language.input,L"Введите");
}
