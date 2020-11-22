#include<stdio.h>
#include<math.h>

#define DIM 15

int *find_largest(int a[], int n);

int main(){

    int array[DIM], i, indMax;

    //riempimento casuale array da 0 a 99
    srand(time(NULL));
    for(i=0;i<DIM;i++){
        array[i]=rand()%100;
    }

    //stampa array
    for(i=0;i<DIM;i++){
        printf("\t%2d",array[i]);
    }

    indMax=*find_largest(array,DIM);
    printf("\nIl massimo e' %d",indMax);


}

int *find_largest(int a[], int n){

    int i, *temp;

    temp=&a[0];
    for(i=0;i<n;i++){
        if(*temp<a[i]){
            printf("\n%d<%d",*temp,a[i]);
            temp=&a[i];
        }
        if(*temp>a[i]){
            printf("\n%d>%d",*temp,a[i]);
        }
        else{
            printf("\n%d=%d",*temp,a[i]);
        }
    }

    return temp;

}
