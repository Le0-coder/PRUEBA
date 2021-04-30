#pragma once
#include "University.h"
//Aggregation Class
class UniversityContainer {
private:
    int can;
    int tam;
    University** vec;
public:

    UniversityContainer(int);
    virtual ~UniversityContainer();
    string addUniversity(University*);
    string toString();
};