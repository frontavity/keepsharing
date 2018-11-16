#include <stdio.h>
#include <stdlib.h>
#define ARRLEN(x) (sizeof(x)/sizeof(x[0]))

// Suche des kleinsten Elementes eines Arrays//
float min(float floatArray[], unsigned int arrLen){
    float lowestFigure = floatArray[0];

    for(int i = 0; i < (arrLen); i++){
        if(floatArray[i] < lowestFigure) lowestFigure = floatArray[i];
    }
    return lowestFigure;
}

// Index des größten Element eines Arrays//
int minIndex(float floatArray[], unsigned int arrLen){
    float greatestFigure = floatArray[0];
    unsigned int posArr = 0;

    for(int i = 0; i <= (arrLen -1); i++){
        if(floatArray[i] > greatestFigure){
            greatestFigure = floatArray[i];
            posArr = i;
        }
    }
    return posArr;
}

//Summe aller Elemente eines Arrays//
int sum(int intArray[], unsigned int arrLen){
    int sum = 0;

    for(int i = 0; i <= (arrLen -1); i++){
        sum += intArray[i];
    }
    return sum;
}

// Arithmetischer Mittelwert aller Elemente eines Arrays//
float avg(int intArray[], unsigned int arrLen){
    float avg = ((float)(sum(intArray, arrLen)) / (float)(arrLen));
    return avg;
}

// Bestimmung Maximalwert zweidimensonales Array//
int max(int *intArray, int arrCol, int arrRow){
    int *pointer = intArray;
    int max = *pointer;
    int counter = 0;

    for(int i = 0; i <= (arrCol-1); i++){
        for(int j = 0; j <= (arrRow-1); j++){
            if(*(pointer+counter) > max) max = *(pointer+counter);
            counter++;
        }
    }
    return max;
}

int main(){
    //variabeln Initialisieren
    float array[] = {1.23,2.66,3.19,2.76,3.20,1.22,4.10};
    int array2[] = {1,2,3,4,5,6,7,8,9,10};
    int array3[4][3] = {
            {1,2,3},
            {5,6,11},
            {9,0,-1},
            {-3,-4,-5}
    };
    int arrRow = (sizeof(array)/sizeof(array[0]));
    int arrCol = (sizeof(array3[0])/sizeof(float));

    //Aufruf der Funktionen innerhalb der Ausgabe
    printf("Das kleinste Element ist: %.2f\n", min(array, ARRLEN(array)));
    printf("Der Indes des größten Elements: %d\n", minIndex(array, ARRLEN(array)));
    printf("Die Summe aller Werte ist: %d\n", sum(array2, ARRLEN(array2)));
    printf("Das Arithmetischer Mittelwert lautet: %.2f\n", avg(array2, ARRLEN(array2)));
    printf("Das größte Element dieses Arrays ist: %d.\n", max(*array3, arrCol, arrRow));

    //Ende der Funktion
    return EXIT_SUCCESS;
}

