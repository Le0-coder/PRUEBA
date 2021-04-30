#pragma once
#include<iostream>
#include<sstream>


using namespace std;

class Person {
protected:
	string firstName;
	string lastName;
	int documentId;
public:

	Person();
	Person(string, string, int);
	virtual ~Person();

    string getFirstName() const;
    void setFirstName(string firstName);

    string getLastName() const;
    void setLastName(string lastName);

    int getDocumentId() const;
    void setDocumentId(int documentId);

	virtual double salary()  = 0;
	virtual string toString() = 0;

};