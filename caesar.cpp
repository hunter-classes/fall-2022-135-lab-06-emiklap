#include <iostream>

/**
 * A helper function to shift one character by rshift
 */
char shiftChar(char c, int rshift) {
    int num = int(c);
    //for characters that are uppercase
    if (num >= 65 && num <= 90) {
        num = num - 65;
        num = (num + rshift) % 26;
        num += 65;
    }
    //for characters that are lower case
    else if (num >= 97 && num <= 122) {
        num = num - 97;
        num = (num + rshift) % 26;
        num += 97;
    }
    return (char)num;
}

/**
 * Caesar cipher encryption
 */
std::string encryptCaesar(std::string plaintext, int rshift){
    std::string returnStr = "";
    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            returnStr += shiftChar(plaintext[i], rshift);
        } else {
            returnStr += plaintext[i];
        }
    }
    return returnStr;
}
