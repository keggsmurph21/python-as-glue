int fact(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n * fact(n-1);
    }
}

int mod(int x, int y) {
    return (x % y);
}

int diff(int x, int y) {
    return (x - y);
}
