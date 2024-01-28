#include "NumClass.h"

int isStrong(int n) {
    int value = n, b = n;
    int a;
    int temp;
    do{
        temp = 1;
        a = b%10;
        b = b/10;
        for(int i = 1; i <= a; i++){
            temp = temp*i;
        }
        value = value - temp;
        if(value<0){
            return 0;
        }
    }while(b>0);
    if(value == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int Size(int n) {
    int i = 0;
    do{
        n = n/10;
        i++;
    }while(n>0);
    return i;
}

int Power(int a, int b) {
    int answer = 1;
    for(int i = 0; i<b; i++) {
        answer *= a;
    }
    return answer;
}