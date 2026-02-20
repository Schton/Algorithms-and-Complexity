#include <stdio.h>
#include <stdbool.h>

#define SIZE 20

void combSort(int a[], int size);

int main(){

    int a[] = {15,9,14,1,13,8,2,12,10,7,3,18,20,19,6,11,4,5,16,17};

    for(int k = 0; k < SIZE; k++){
        printf("%d\t", a[k]);
    }
    printf("\n");

    combSort(a, 20);

    return 0;
}

void combSort(int a[], int size){

    int gap = size;
    float shrink = 1.3;
    bool swap = true;

    while(gap > 1 || swap){
        gap /= shrink;

        if(gap <= 1) gap = 1;
        swap = false;
        int i = 0;
        while(i + gap < size){
            if(a[i] > a[i + gap]){
                int temp = a[i];
                a[i] = a[i + gap];
                a[i + gap] = temp;
                swap = true;
            }
            i++;
        }
    }

    //display
    for(int k = 0; k < size; k++){
        printf("%d\t", a[k]);
    }
}