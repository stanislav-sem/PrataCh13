#include<iostream>
using namespace std;
#include "classic.h"           // будет содержать #include cd.h

void Bravo(const Cd & disk);

int main() {
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", 
                         "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;
    // Непосредственное использование объектов
    cout << "Using object directly:\n";
    c1.Report();                // Использование метода Cd
    c2.Report();                // использование метода Classic

    // Использование указателя на объекты типа cd *
    cout << "Using type cd* pointer to objects:\n";
    pcd->Report();              // использование метода Cd для объекта cd
    pcd = &c2;
    pcd->Report();              // использование метода Classic для объекта classic

    // Вызов функции с аргументом-ссылкой на Cd
    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    
    // Тестирование присваивания
    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    return 0;
}

void Bravo(const Cd & disk) {
    disk.Report();
}