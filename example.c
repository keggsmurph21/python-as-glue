#include <time.h>

double my_var = 3.0;

int fact(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n * fact(n-1);
    }
}

int mod(int x, int y) {
    return (x%y);
}

char* get_time() {
    time_t ltime;
    time(&ltime);
    return ctime(&ltime);
}

