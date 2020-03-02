#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(char * s1, char * s2, int n, double x) {
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    performers[0] = '\0';
    label[0] = '\0';
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