#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
  std::cout << "Task B: encrptCaesar(\"Way to Go!\", 5) = " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "Task C: encryptVigenere(\"Hello, World!\", \"cake\") = " << encryptVigenere("Hello, World!", "cake") << std::endl;
  std::cout << "Task D: decryptCaesar(Bfd yt Lt!, 5) = " << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
  std::cout << "Task D: decryptVigenere(Jevpq, Wyvnd!, 5) = " << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
  return 0;
}
