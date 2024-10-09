#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Overcoat
{
protected:
	string name;
	int type;// 0 - man, 1- women, 2- child (m, w, c)
	string size;
	float price;
public:
	Overcoat();
	Overcoat(string name, int type, string size, float price);

	void setName(string name);
	void setType(int type1);
	void setSize(string size);
	void setPrice(float price);

	string getName()const;
	int getType()const;
	string getSize()const;
	float getPrice()const;

	bool operator ==(const Overcoat& obj) const&;
	bool operator !=(const Overcoat& obj) const&;

	bool operator >(const Overcoat& obj) const&;
	bool operator >=(const Overcoat& obj) const&;
	bool operator <(const Overcoat& obj) const&;
	bool operator <=(const Overcoat& obj) const&;

	Overcoat operator ++();
	Overcoat operator ++(int);
	Overcoat operator --();
	Overcoat operator --(int);

	friend istream& operator >>(istream& in, Overcoat& obj);
	friend ostream& operator <<(ostream& out, const Overcoat& obj);
	

};

