#ifndef Person_H
#define PERSON_H

#include <string>
using namespace std;

class person{
	string name;
	int age;
public:
	person(string,int);
	person(const person&);
	virtual string toString()const;
	void bday();
	string getname()const;
	void setname(string);
	bool operator ==(const person&)const;
	bool operator!=(const person&)const;

};

#endif