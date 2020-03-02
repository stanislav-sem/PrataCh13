#pragma once
#include "cd.h"

class Classic : public Cd {
private:
    char maintheme[50];
public:
    Classic(char * mt, char * s1, char * s2, int n, double x);
    Classic();
    void Report() const;
};