#include <iostream>
#include <locale>
#include <cstring>

struct st_language{
    wchar_t input[10];

};

void discr(st_language language);
inline void inp_num_abc(int &a, int &b, int &c , wchar_t *t_in);
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
    float d;
    //wchar_t t_in[10] = L"Введите";


    wprintf(L"Вычислитель дискриминанта\n");
    inp_num_abc(a,b,c,language.input);

    d = b;

    wprintf(L"d = %i",d);

    //wprintf(L"a = %i\nb = %i\nc = %i\n",a,b,c);

}

inline void inp_num_abc(int &a,int &b, int &c ,wchar_t* t_in){
    wprintf(L"%ls %s: ",t_in,"a");
    std::cin >> a;

    wprintf(L"%ls %s: ",t_in,"b");
    std::cin >> b;

    wprintf(L"%ls %s: ",t_in,"c");
    std::cin >> c;
}

void set_text(st_language &language){
    wcscpy(language.input,L"Введите");
}
