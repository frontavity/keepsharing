#include <stdio.h>
#include <stdbool.h>

int main() {

    // functions
    bool isPalindrom(char pString[], int pStringSize);

    // task 1
    char operator;
    double first, second;

    printf("Bitte irgendeiner Aufgabe stellen.. zahl {+,-,*,/} zahl\n");
    // for scanf: %f reads into a float, and %lf reads into a double
    scanf("%lf %c %lf", &first,&operator,&second);

    switch(operator){
        case '+':{
            printf("%.3f\n",first+second);
        }break;

        case '-':{
            printf("%.3f\n",first-second);
        }break;

        case '*':{
            printf("%.3f\n",first*second);
        }break;

        case '/':{
            second == 0 ? printf("divide by null not possible\n") : printf("%.3f\n",first/second);
        }break;

        default:{
            printf("syntax error\n");
        }break;
    }

    // task 2
    char myStringArray[] = "ANNA";
    // 0-1 because of \0 marker present at the end
    printf("%d\n", isPalindrom(myStringArray, sizeof(myStringArray) / sizeof(myStringArray[0]) - 1));

    return 0;
}

bool isPalindrom(char pString[], int pStringSize) {
    bool palindrom = false;
    int iPlusOne = 0;

    for (int i = 0; i < pStringSize; i++) {
        iPlusOne = i;
        iPlusOne++;

        if (pString[i] == pString[pStringSize - (iPlusOne)]) {
            palindrom = true;
        } else return false;
    }
    return palindrom;
}
