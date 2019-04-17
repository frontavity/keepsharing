package com.company;

public class Main {

    public static void main(String[] args) {

        // testing arrays
        double array1[] = createArray(3);
        char charArray[] = {'1','2','3'};

        // 2.1
        printArray(array1);
        space();

        //2.2
        System.out.println(minElement(array1));
        space();

        //2.3
        System.out.println(maxElement(array1));
        space();

        System.out.println(calculateMeanValue(array1));
        space();

        System.out.println(calculateMinimumDistance(array1));
        space();

        System.out.println(calculateSumDigits(charArray));
    }

    static void space(){
        System.out.println("");
    }

    // 2.1
    static double[] createArray(int size){

        double array[] = new double[size];

        for(int i = 0; i<size; i++){
            //(Math.random() * range) + min;
            double random = (Math.random()*100);
            array[i] += random;
        }

        return array;
    }

    //2.2
    static double minElement(double array[]){

        double min = array[0];

        for(int i = 0; i< array.length; i++){
            if(array[i]<min){
                min = array[i];
            }
        }

        return min;
    }

    //2.3
    static double maxElement(double array[]){

        double max = array[0];

        for(int i = 0; i< array.length; i++){
            if(array[i]>max){
                max = array[i];
            }
        }

        return max;
    }

    //2.4
    static void printArray(double array[]){
        for(int i = 0; i< array.length; i++) {
            System.out.println(array[i]);
        }
    }

    //2.5
    static double calculateMeanValue(double array[]){

        double allValue = 0;
        double meanValue = 0;

        for(int i = 0; i< array.length; i++) {
            allValue += array[i];
        }

        meanValue = allValue/(array.length);

        return meanValue;
    }

    //2.6
    static double calculateMinimumDistance(double array[]){

        double minimumDistance = 100;

        int k = 1;

        for(int i=0; i<array.length; i++){
            if(k<array.length){
                if(Math.abs(array[i]-array[k])<minimumDistance){
                    minimumDistance = Math.abs(array[i]-array[k]);
                }
            }

            k++;
        }
        return minimumDistance;
    }

    // 2.7
    static int calculateSumDigits(char[] array){

        int sumDigits = 0;

        for(int i = 0; i< array.length; i++) {
            sumDigits+=Integer.parseInt(array[i]+"");
        }

        return sumDigits;
    }

}
