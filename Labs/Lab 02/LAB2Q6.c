#include <stdio.h>


void efficient( const int source[], int val[], int pos[], int size){

    int k = 4; // length of array
    int n = 0;

     for (int x = 0; x < k;  x++){
            val[x] = 0; // sets default values to 0
    }

    for (int i = 0; i < size; i++){
        if (source[i] != 0){ // checks that the number is not zero

                if (val[n] == 0){ // checks for the next 0
                    val[n] = source[i]; // sets that value to
                    pos[n] = i; // logs the position of the non zero value
                    n++; // go to next val[n]
                }
            }
        }

    printf("val: ");
    for (int a = 0; a < k;  a++){
            printf ("%d ", val[a]); // prints out all the non zeros

    }
    printf("\npos: ");

     for (int b = 0; b < k;  b++){
            printf ("%d ", pos[b]); // prints out the positions of the non zero

    }
}


void reconstruct(int source[], int m, const int val[], const int pos[], int n){

    int count = 0; // initializes the count to 0
    for (int i = 0; i< m; i++){

            if (pos[count] == i){ // checks if the first number in the position array is equal to
                source[i] = val[count]; // sets the source at the point i to the non zero value
                count++; // adds 1 to count to go to the next position

            }
            else{
                source[i] = 0; // sets the source to 0 every time the position doesnt match

            }
    }

    printf("source: ");

    for (int x = 0; x < m;  x++){
            printf ("%d ",source[x]); // prints out source array
    }


}


int main (){

    int source[] = {1,0,3,0,0,7,0,9};
    int val[4];
    int pos[4];
    int size = 8;
    int m = 8;
    int n = 4;


    efficient(source, val, pos, size);
    printf("\n\n");
    reconstruct(source, m, val, pos, n);

}
