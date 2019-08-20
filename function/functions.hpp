struct st_language{
    wchar_t intro[30];
    wchar_t input[10];
    wchar_t error[50];


    wchar_t sqr0[50];
    wchar_t sqr1[50];
    wchar_t sqr2[50];

};

int st_language_choise();

void Dmain(st_language language);
double Dcalculate(long int a,long int b,long int c);

void s_clear();
int inp_num(int &a, st_language language);
inline void d_intro(st_language language);
void set_text(st_language &language, int lan);
bool check_config(st_language &language);
void create_config(int i);
