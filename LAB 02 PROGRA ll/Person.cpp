#include "Person.h"

Person::Person() {
    firstName = "";
    lastName = "";
    documentId = 0;
}

Person::Person(string nom,string lastn ,int ide) {
    firstName = nom;
    lastName = lastn;
    documentId = ide;
}

Person:: ~Person() {}

string Person::getFirstName() const
{
    return firstName;
}

void Person::setFirstName(string firstName)
{
    this->firstName = firstName;
}

string Person::getLastName() const
{
    return lastName;
}

void Person::setLastName(string lastName)
{
    this->lastName = lastName;
}

int Person::getDocumentId() const
{
    return documentId;
}

void Person::setDocumentId(int documentId)
{
    this->documentId = documentId;
}
