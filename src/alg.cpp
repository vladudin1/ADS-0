// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
        int n = 0;
    int del = 0;
    if (a < b) {
        del = a;
        if (b % a == 0) {
            del = a;
        }
        else {
            for (int i = del; i > 0; i--) {
                if (a % i == 0 && b % i == 0) {
                    del = i;
                    break;
                }
            }
        }
    }
    if (a > b) {
        del = b;
        if (a % b == 0) {
            del = b;
        }
        else {
            for (int i = del; i > 0; i--) {
                if (a % i == 0 && b % i == 0) {
                    del = i;
                    break;
                }
            }
        }
    }
    return del;
}
