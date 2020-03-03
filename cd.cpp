#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(char * s1, char * s2, int n, double x) {
    performers = new char[std::strlen(s1) + 1];
    std::strcpy(performers, s1);
    label = new char[std::strlen(s2) + 1];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}
void Cd::Report() const {
    using std::cout;
    using std::endl;
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd::~Cd() {
    delete [] performers;
    delete [] label;
}

Cd & Cd::operator=(const Cd & d) {
    if(this == &d) {
        return *this;
    }
    delete [] performers;
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    
    delete [] label;
    label = new char[std::strlen(d.performers) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}