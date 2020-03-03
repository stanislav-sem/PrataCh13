#include "classic.h"
#include <iostream>
#include <cstring>

Classic::Classic(char * mt, char * s1, char * s2, int n, double x)
        : Cd(s1, s2, n, x) {
            maintheme = new char[std::strlen(mt) + 1];
            std::strcpy(maintheme, mt);
}

Classic::Classic(const Classic & c) : Cd(c) {
    maintheme = new char[std::strlen(c.maintheme) + 1];
    std::strcpy(maintheme, c.maintheme);
}

Classic::Classic() : Cd() {
    maintheme = nullptr;
}

Classic & Classic::operator=(const Classic & c) {
    if (this == &c) {
        return *this;
    }
    Cd::operator=(c);
    delete maintheme;
    maintheme = new char[std::strlen(c.maintheme) + 1];
    std::strcpy(maintheme, c.maintheme);
    return *this;
}

Classic::~Classic() {
    delete [] maintheme;
}


void Classic::Report() const {
    std::cout << "Maintheme: " << maintheme << std::endl;
    Cd::Report();
}
