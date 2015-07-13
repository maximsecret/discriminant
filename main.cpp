#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

struct st_language{
    wchar_t input[10];

};

void discr(st_language language);
inline void inp_num(int &a, wchar_t *t_in,wchar_t* t_a);
void set_text(st_language &language);

int main()
{
    setlocale(LC_ALL,""); // Включаем UTF-8
    struct st_language language; //Создаем переменные с текстами.
    set_text(language); // Устанавливаем текст
    discr(language);
    return 0;
}



void discr(st_language language){
    int a,b,c;
    float d,x1,x2;
    //wchar_t t_in[10] = L"Введите";


    wprintf(L"Вычислитель дискриминанта\n");
    wchar_t i[1];

    //Вводим переменные
    inp_num(a,language.input,wcscpy(i,L"a"));
    inp_num(b,language.input,wcscpy(i,L"b"));
    inp_num(c,language.input,wcscpy(i,L"c"));
    //Вычисляем дискриминант
    d = b*b - 4 * a * c  ;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    wprintf(L"d = %F\n",d);
    wprintf(L"x1 = %F\n",x1);
    wprintf(L"x2 = %F\n",x2);

    //wprintf(L"a = %i\nb = %i\nc = %i\n",a,b,c);

}

inline void inp_num(int &a ,wchar_t* t_in,wchar_t* t_a){
    wprintf(L"%ls %s: ",t_in,t_a);
    std::cin >> a;
}

void set_text(st_language &language){
    wcscpy(language.input,L"Введите");
}
