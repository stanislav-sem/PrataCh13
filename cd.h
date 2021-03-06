// Объявление базового класса Cd
#pragma once

//Класс представляющий компакт-диск
class Cd {
private:
    char * performers;
    char * label;
    int selections;         // количество сборников
    double playtime;        // время воспроизведения в минутах
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    Cd & operator=(const Cd & d);
    ~Cd();
    virtual void Report() const;    // выводит все данные о диске
    // Cd & operator=(const Cd & d);
};
