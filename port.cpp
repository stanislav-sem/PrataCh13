#include "port.h"
#include <cstring>
using namespace std;

Port::Port(const char * br, const char * st, int b) {
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.brand);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p) {
    if (this == &p) {
        return *this;
    }
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.brand);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b) {
    if (bottles >= b) {
        bottles -= b;
    } else {
        cout << "Error! Not enought bottles.\n";
    }
    return *this;
}

void Port::Show() const {
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p) {
    os << p.brand << ", "
       << p.style << ", "
       << p.bottles << endl;
    return os;
}
