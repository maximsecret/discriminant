struct st_language{
    wchar_t intro[30];
    wchar_t input[10];

    wchar_t sqr0[50];
    wchar_t sqr1[50];
    wchar_t sqr2[50];

};

int st_language_choise();

void discr(st_language language);
void s_clear();
inline void inp_num(int &a, st_language language, wchar_t* t_a);
inline void d_intro(st_language language);
void set_text(st_language &language, int lan);
