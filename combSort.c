#include <stdio.h>

void combSort(int a[], int size);

int main(){

    int a[] = {9,1,8,2,7,3,6,4,5};

    combSort(a, 9);

    return 0;
}

void combSort(int a[], int size){

    //display
    for(int k = 0; k < size; k++){
        printf("%d\t", a[k]);
    }

}