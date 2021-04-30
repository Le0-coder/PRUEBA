#include "University.h"

int main() {
	Administrative* OBJ1 = new Administrative("", "", 100000, 20.00);
	Administrative* OBJ2 = new Administrative("", "", , );
	Administrative* OBJ3 = new Administrative("", "", , );
	Professor* OBJ4 =new Professor("" , "" ,  ,  , );
	Professor* OBJ5 = new Professor("", "", , , );
	Professor* OBJ6 = new Professor("", "", , , );
	University* Univers = new University("Universidad Nacional", OBJ4 , OBJ1, 1000, 1000);
	Univers->addProfessor(OBJ4);
	Univers->addProfessor(OBJ5);
	Univers->addProfessor(OBJ6);
	Univers->addAdministrative(OBJ1);
	Univers->addAdministrative(OBJ2);
	Univers->addAdministrative(OBJ3);
	cout << Univers->getProfessorList();
	cout << Univers->getAdministrativeList();
}