#include <iostream>
#include "caesar.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
    int lshift = 26 - rshift;
    return encryptCaesar(ciphertext, lshift);

}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
    std::string realKey = "";

    for (int i = 0; i < keyword.length(); i++) {
        int originalKey = numOfLetter(keyword[i]);
        if (originalKey == 0) {
            realKey += keyword[i];
        } else {
            int num = 26 - originalKey;
            realKey += (char)(97 + num);
        }
    }
    return encryptVigenere(ciphertext, realKey);
}
