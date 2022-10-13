#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

// add your tests here
TEST_CASE("Task B: Caesar Cipher"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Jackdaws love my big sphinx of quartz", 12) == "Vmowpmie xahq yk nus ebtuzj ar cgmdfl");
}

TEST_CASE("Task C: Vigener Cipher") {
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Jackdaws love my big sphinx of quartz", "amazing") == "Jmcjlncs xoum ze bug rxuonj oe yhgrfz");
    CHECK(encryptVigenere("Pack my box with FIVE dozen liquor jugs", "chocolate") == "Rhqm aj bhb yphj TTVX hqgsp ztqnst qiig");
}
