#include <stdio.h>

void letter_freq(const char word[], int freq[]){

    const int caseDiff = 32; // declares the difference between the cases
    const int startNum = 65; // start number
    int a = 0;
    int numLetters = 0;

    for (int a = 0; a<26; a++){ // initializes all letters to be a count of 0
        freq[a] = 0;
    }


    while (word[a] != '\0'){ // finds length of string;
        numLetters++;
        a++;
    }

    for (int i = 0; i < numLetters; i++){

        for (int alphabet = startNum; alphabet<startNum+26; alphabet++){


        if ((int)word[i] == alphabet || (int)word[i] == alphabet+caseDiff){
            freq[alphabet-65] += 1;
        }
    }
    }

    char lower = 0;
    char upper = 0;
    for (int i = 0; i<26; i++){

        upper = i+65; // lowercase
        lower = i+97; // uppercase
        printf("The count of %c and %c is: %d\n",lower,upper,freq[i]);
    }






}

int main(){

    char word[] = {"abcdefgggggisslalsjsjskasdkzxcn"};
    int freq[26];

    letter_freq(word, freq);
}
