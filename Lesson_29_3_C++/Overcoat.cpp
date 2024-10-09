#include "Overcoat.h"

Overcoat::Overcoat()
{
    name = "none";
    type = 4;
    size = "none";
    price = 0;

}

Overcoat::Overcoat(string name, int type, string size, float price)
{
    this->name = name;
    this->type = type;
    this->size = size;
    this->price = price;
}

void Overcoat::setName(string name)
{
    this->name = name;
}

void Overcoat::setType(int type)
{
    this->type = type;
}

void Overcoat::setSize(string size)
{
    this->size = size;
}

void Overcoat::setPrice(float price)
{
    this->price = price;
}

string Overcoat::getName() const
{
    return name;
}

int Overcoat::getType() const
{
    return type;
}

string Overcoat::getSize() const
{
    return size;
}

float Overcoat::getPrice() const
{
    return price;
}

bool Overcoat::operator==(const Overcoat& obj) const&
{
    return obj.type == type;
}

bool Overcoat::operator!=(const Overcoat& obj) const&
{
    return !(*this == obj);
}

bool Overcoat::operator>(const Overcoat& obj) const&
{
    return price > obj.price;
}

bool Overcoat::operator>=(const Overcoat& obj) const&
{
    return price >= obj.price;
}

bool Overcoat::operator<(const Overcoat& obj) const&
{
    return price < obj.price;
}

bool Overcoat::operator<=(const Overcoat& obj) const&
{
    return price <= obj.price;
}

Overcoat Overcoat::operator++()
{
    if (size == "S") size = "M";
    else if (size == "M") size = "L";
    else if (size == "L") size = "XL";
    return *this;
}

Overcoat Overcoat::operator++(int)
{
    Overcoat temp = *this;
    ++(*this);
    return temp;
}

Overcoat Overcoat::operator--()
{
    if (size == "XL") size = "L";
    else if (size == "L") size = "M";
    else if (size == "M") size = "S";
    return *this;
}

Overcoat Overcoat::operator--(int)
{
    Overcoat temp = *this;
    --(*this);
    return temp;
}

istream& operator>>(istream& in, Overcoat& obj)
{
    cout << "\n------------------------------------\n";
    cout << "Enter: Name, Type (0 - man, 1 - woman, 2 - child), Size (S, M, L, XL), Price\n";
    in >> obj.name >> obj.type >> obj.size >> obj.price;
    return in;
}

ostream& operator<<(ostream& out,const  Overcoat& obj)
{
    out << "Name: " << obj.name << ", Type: " << obj.type << ", Size: " << obj.size << ", Price: " << obj.price;
    return out;
}





