#ifndef NUMERO_H_INCLUDED
#define NUMERO_H_INCLUDED

#include <iostream>

class Numero
{
    private:
    int numero;

public:
    Numero();
    Numero(const int);
    Numero(const Numero&);

    Numero operator+(const Numero&)const;
    Numero operator+(const int&)const;

    Numero& operator=(const Numero&);
    Numero& operator=(const int&);

    bool operator==(const Numero&);
    bool operator==(const int&);

    friend std::ostream& operator<<(std::ostream& os, const Numero& val);
    friend std::istream& operator>>(std::istream& os, Numero& numero);

    int getValue();

    ~Numero();
};

#endif // NUMERO_H_INCLUDED
