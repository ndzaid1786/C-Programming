// name-Zaid Badarpura
// Div-D , //roll no-49
//branch-computer eng
//UIN-251P127

#include <stdio.h>

int factorial(int num);  
int iterative(int rec);

int iterative(int rec) {
    rec = rec * factorial(rec - 1);
    return rec;
}

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int a;
    printf("Input number: ");
    scanf("%d", &a);
    printf("The factorial is %d", iterative(a));
    return 0;
}
