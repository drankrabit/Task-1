#include <stdio.h>
#include "basicClassification.c"
#include "advancedClassificationLoop.c"
//#include "advancedClassificationRecursion.c"

int min(int a, int b);
int max(int a, int b);

void main() {
    int a;
    int b;
    printf("Type the first number: \n");
    scanf("%d", &a);
    printf("Type the second number: \n");
    scanf("%d", &b);
    printf("The Prime numbers are: \n");
    for(int i = min(a,b) + 1; i < max(a,b); i++) {
        if (isPrime(i) == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    printf("The Armstrong numbers are: \n");
    for(int i = min(a,b) + 1; i < max(a,b); i++) {
        if (isArmstrong(i) == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are: \n");
    for(int i = min(a,b) + 1; i < max(a,b); i++) {
        if (isStrong(i) == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    printf("The Polindrome numbers are: \n");
    for(int i = min(a,b) + 1; i < max(a,b); i++) {
        if (isPalindrome(i) == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int min(int a, int b) {
    if(a<b) {
        return a;
    }
    else if(a>b) {
        return b;
    }
    else {
        return a;
    }
}

int max(int a, int b) {
    if(a>b) {
        return a;
    }
    else if(a<b) {
        return b;
    }
    else {
        return a;
    }
}