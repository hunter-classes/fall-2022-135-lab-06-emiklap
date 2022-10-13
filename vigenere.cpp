#include <iostream>
#include "caesar.h"


/**
 * Returns the position of a letter in the alphabet (ex: a is 0, b is 1, etc.)
 */
int numOfLetter(char letter) {
    letter = toupper(letter);
    int num = int(letter) - 65;
    return num % 26;

}

/**
 * Vigenere cipher encryption
 */
std::string encryptVigenere(std::string plaintext, std::string keyword){
    int key = 0;
    int keyMax = keyword.length();
    std::string returnStr = "";

    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            returnStr += shiftChar(plaintext[i], numOfLetter(keyword[key]));
            key++;
            //making sure key never gets bigger than the max number of letters in the keyword
            key = key % keyMax;
        } else {
            returnStr += plaintext[i];
        }
    }
    return returnStr;

}
