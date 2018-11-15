// standard libraries
#include <stdio.h>
#include <stdlib.h>

int main() {

    //function
    double min(double pArray[], int pArraySize);
    int minIndex(double pArray[], int pArraySize);
    int sum(int pArray[], int pArraySize);
    double avg(int pArray[], int pArraySize);
    int max(int pRow, int pColumn,int pArray[pRow][pColumn]);

    // test data arrays
    double testDataDouble[6] = {-199,2,-400,10,2700,101};
    int testDataInt[6] = {1,2,4,10,2700,101};
    int testDataIntD[4][3] = {{10,2,3},{4,50,6},{7,8,9},{4,5,60000}};

    // task 1
    printf("%f\n",min(testDataDouble, sizeof(testDataDouble)/ sizeof(testDataDouble[0])));
    printf("%d\n",minIndex(testDataDouble, sizeof(testDataInt)/ sizeof(testDataInt[0])));
    printf("%d\n",sum(testDataInt, sizeof(testDataInt)/ sizeof(testDataInt[0])));
    printf("%f\n",avg(testDataInt, sizeof(testDataInt) / sizeof(testDataInt[0])));

    // task 2
    printf("%d\n", max(sizeof(testDataIntD)/ sizeof(testDataIntD[0]), sizeof(testDataIntD[0])/ sizeof(testDataIntD[0][0]),testDataIntD));

    return 0;
}

double min(double pArray[], int pArraySize){
    int minimum = pArray[0];
    for(int i = 0; i< pArraySize; i++){
        if(pArray[i] < minimum) minimum = pArray[i];
    }
    return minimum;
}

int minIndex(double pArray[],int pArraySize){
    int maximumIndex = 0, maximum = pArray[0];
    for(int i = 0; i< pArraySize; i++){
        if(pArray[i] > maximum) {
            maximum = pArray[i];
            maximumIndex =i;
        }
    }
    return maximumIndex;
}

int sum(int pArray[], int pArraySize){
    int sum = 0;
    for(int i = 0; i < pArraySize; i++) sum += pArray[i];
    return sum;
}

double avg(int pArray[], int pArraySize){
    double sum = 0;
    for(int i = 0; i < pArraySize; i++) sum += pArray[i];
    return sum/pArraySize;
}

int max(int pRow, int pColumn, int pArray[pRow][pColumn]){
    int maximum = pArray[0][0];
    for(int i = 0; i< pRow; i++){
        for(int j = 0; j<pColumn; j++){
            if(pArray[i][j]>maximum) maximum=pArray[i][j];
        }
    }
    return maximum;
}