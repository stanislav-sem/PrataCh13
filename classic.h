#pragma once
#include "cd.h"

class Classic : public Cd {
private:
    char * maintheme;
public:
    Classic(char * mt, char * s1, char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    Classic & operator=(const Classic & c);
    ~Classic();

    void Report() const;
};