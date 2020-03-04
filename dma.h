// dma.h -- наследование и динамическое выделение памяти
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// Абстрактный базовый класс
class DMA {
private:
    char * label;
    int rating;
public:
    DMA(const char * l = "null", int r = 0);
    DMA(const DMA & d);
    virtual ~DMA();
    DMA & operator=(const DMA & d);
    friend std::ostream & operator=(std::ostream & os, const DMA & d);
};


// Базовый класс, использующий динамическое выделение памяти
class baseDMA {
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// Производный класс без динамического выделения памяти
// Декстуктор не нужен
// Используется неявный конструктор копирования
// Используется неявная операция присваивания
class lacksDMA : public baseDMA {
private:
    enum {COL_LEN = 40};
    char color [COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};


// Производный класс с динамическим выделением памяти
class hasDMA : public baseDMA {
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif
