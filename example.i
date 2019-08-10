%module example
%{
    extern double my_var;
    extern int fact(int n);
    extern int mod(int x, int y);
    extern char* get_time();
%}

extern double my_var;
extern int fact(int n);
extern int mod(int x, int y);
extern char* get_time();

