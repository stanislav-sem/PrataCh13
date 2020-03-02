#include "classic.h"
#include <iostream>
#include <cstring>

Classic::Classic(char * mt, char * s1, char * s2, int n, double x)
        : Cd(s1, s2, n, x) {
            std::strcpy(maintheme, mt);
        }

Classic::Classic() : Cd() {
    maintheme[0] = '\0';
}

void Classic::Report() const {
    std::cout << "Maintheme: " << maintheme << std::endl;
    Cd::Report();
}
