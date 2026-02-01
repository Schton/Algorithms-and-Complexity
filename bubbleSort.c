#include <stdio.h>

void bubbleSort(int a[], int size);

int main(){

    int a[] = {9,1,8,2,7,3,6,4,5};

    bubbleSort(a, 9);

    return 0;
}

void bubbleSort(int a[], int size){

    int i,j,temp;

    //sort
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - i - 1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //display
    for(int k = 0; k < size; k++){
        printf("%d\t", a[k]);
    }

}