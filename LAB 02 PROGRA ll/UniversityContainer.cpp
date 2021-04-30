#include "UniversityContainer.h"
//Aggregation Class

UniversityContainer::UniversityContainer(int tama) {
	can = 0;
	tam = tama;
	vec = new University * [tam];

	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

UniversityContainer:: ~UniversityContainer() {
	delete[] vec;
}

string UniversityContainer::addUniversity(University* U1) {
    stringstream s;
    if (can < tam) {
        vec[can++] = U1;
        s << "UNIVERSITY ADDED" << endl;
    }
    else
        s << "AN ERROR OCURRED" << endl;
    return s.str();
}
string UniversityContainer::toString() {
    stringstream s;
    for (int i = 0; i < can; i++) {
        s << vec[i]->toString() << endl;
    }
    return s.str();
}