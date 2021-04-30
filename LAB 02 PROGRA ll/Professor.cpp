#include "Professor.h"

Professor::Professor() {
    firstName = "";
    lastName = "";
    documentId = 0;
    monthlySalary = 0.0;
    commissionRate = 0.0;
}

Professor::Professor(double ms, double comi) {
    monthlySalary = ms;
    commissionRate = comi;
}

Professor::Professor(string nom, string lastn, int ide , double ms, double comi) {
    firstName = nom;
    lastName = lastn;
    documentId = ide;
    monthlySalary = ms;
    commissionRate = comi;
}

Professor:: ~Professor() {}

double Professor::getMonthlySalary() const
{
    return monthlySalary;
}

void Professor::setMonthlySalary(double monthlySalary)
{
    this->monthlySalary = monthlySalary;
}

double Professor::getCommissionRate() const
{
    return commissionRate;
}

void Professor::setCommissionRate(double commissionRate)
{
    this->commissionRate = commissionRate;
}
double Professor::salary() {
    return monthlySalary + commissionRate;
}
string Professor::toString() {
    stringstream s;
    s<<"Professor Information: "<< firstName << " " << lastName << endl
       << "Doc Id: " << documentId << ", Monthly Salary: "<< salary();
    return s.str();
}
