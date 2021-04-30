#include "University.h"
//Composition Class

University::University() {
    name = "";
    professor = NULL;
    administrative = NULL;
    professorList = NULL;
    administrativeList = NULL;
    canAdministrative = 0;
    canProfessor = 0;
    tamProfessor = 0;
    tamAdministrative = 0;
}
University::University(string nom) {
    name = nom;
}
University::University(string nom , Professor* P1 , Administrative* A1 , int tamProf , int tamAdmi) {
    name = nom;
    professor = P1;
    administrative = A1;
    tamProfessor = tamProf;
    tamAdministrative = tamAdmi;
    professorList = new Professor * [tamProfessor];
    administrativeList = new Administrative * [tamAdministrative];
    for (int i = 0; i < tamProfessor; i++) {
        professorList[i] = NULL;
    }
    for (int i = 0; i < tamAdministrative; i++) {
        administrativeList[i] = NULL;
    }
}

University:: ~University() {
    for (int i = 0; i < canProfessor; i++) {
        delete professorList[i];
    }
    for (int i = 0; i < canAdministrative; i++) {
        delete administrativeList[i];
    }

    delete[] administrativeList;
    delete[] professorList;
}

string University::getName() const
{
    return name;
}

void University::setName(string name)
{
    this->name = name;
}

Professor* University::getProfessor() const
{
    return professor;
}

void University::setProfessor(Professor* professor)
{
    this->professor = professor;
}

Administrative* University::getAdministrative() const
{
    return administrative;
}

void University::setAdministrative(Administrative* administrative)
{
    this->administrative = administrative;
}

Professor** University::getProfessorList() const{
    return professorList;
} 

void University::setProfessorList(Professor** professorList)
{
    this->professorList = professorList;
}

Administrative** University::getAdministrativeList() const{
    return administrativeList;
}

void University::setAdministrativeList(Administrative** administrativeList)
{
    this->administrativeList = administrativeList;
}

string University::addProfessor(Professor* Pr) {
    stringstream s;
    if (canProfessor < tamProfessor) {
        professorList[canProfessor++] = Pr;
        s << "PROFESSOR ADDED" << endl;
    }
    else
        s << "AN ERROR OCURRED" << endl;
    return s.str();
}

string University::addAdministrative(Administrative* Ad) {
    stringstream s;
    if (canAdministrative < tamAdministrative) {
        administrativeList[canAdministrative++] = Ad;
        s << "ADMINISTRATIVE ADDED" << endl;
    }
    else
        s << "AN ERROR OCURRED" << endl;
    return s.str();
}

string University::toString(){
    stringstream s;
        s <<"---------"<<name<< "---------" << endl;
        for (int i = 0; i < canAdministrative; i++) {
            s << administrativeList[i]->toString() << endl;
        }
        for (int i = 0; i < canProfessor; i++) {
            s << professorList[i]->toString() << endl;
        }
    return s.str();
}


