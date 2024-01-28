#include "NumClass.h"
#include <stdio.h>
int isArmstrongHelper(int n, int p);
int isPalindromeHelper(int array[], int a);

int isPalindrome(int n) {
    int a = Size(n);
    int digits[a];
    for(int i = 0; i < a; i++) {
        digits[i] = n%10;
        n = n/10;
    }
    return isPalindromeHelper(digits, a);
}

int isPalindromeHelper(int digits[], int a) {
    if((a == 0) || (a == 1)) {
        return 1;
    }
    else {
        if(digits[0] == digits[a - 1]) {
            int newdigits[a-2];
            for(int i = 1; i < a-1; i++) {
                newdigits[i] = digits[i];
            }
            return isPalindromeHelper(newdigits, a-2);
        }
        else {
            return 0;
        }
    }
}

int isArmstrong(int n) {
    return isArmstrongHelper(n, 1);
}

int isArmstrongHelper(int n, int p) {
    int a = Size(n);
    int b = n;
    int digits[a];
    for(int i = 0; i < a; i++) {
        digits[i] = n%10;
        n = n/10;
    }
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + Power(digits[i], p);
        if(sum > b) {
            return 0;
        }
    }
    if(sum == b) {
        return 1;
    }
    else {
        return isArmstrongHelper(b, p+1);
    }
}