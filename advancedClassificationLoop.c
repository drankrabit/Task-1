#include "NumClass.h"

int isPalindrome(int n) {
    int a = Size(n);
    int digits[a];
    for(int i = 0; i < a; i++) {
        digits[i] = n%10;
        n = n/10;
    }
    for(int i = 0; i < (a/2); i++) {
        if(digits[i] != digits[a-i-1]) {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int n) {
    int a = Size(n);
    int b = n;
    int digits[a];
    for(int i = 0; i < a; i++) {
        digits[i] = n%10;
        n = n/10;
    }
    int sum;
    int p = 1;
    do {
        sum = 0;
        for (int i = 0; i < a; i++)
        {
            sum = sum + Power(digits[i], p);
        }
        p++;
        if(sum == b) {
        return 1;
        }
    } while(sum < b);
    if(sum == b) {
        return 1;
    }
    else {
        return 0;
    }
}