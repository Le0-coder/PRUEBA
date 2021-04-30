#include "Administrative.h"

Administrative::Administrative() {
    firstName = "";
    lastName = "";
    documentId = 0;
    monthlySalary = 0.0;
}

Administrative::Administrative(double ms) {
    monthlySalary = ms;
}

Administrative::Administrative(string nom, string lastn, int ide, double ms) {
    firstName = nom;
    lastName = lastn;
    documentId = ide;
    monthlySalary = ms;
}

Administrative:: ~Administrative() {}

double Administrative::getMonthlySalary() const
{
    return monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary)
{
    this->monthlySalary = monthlySalary;
}

double Administrative::salary() {
    return monthlySalary;
}
string Administrative::toString() {
    stringstream s;
    s << "Administrative Information: " << firstName << " " << lastName << endl
        << "Doc Id: " << documentId << ", Monthly Salary: " << salary();
    return s.str();
}
