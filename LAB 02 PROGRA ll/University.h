#include "Administrative.h"
#include "Professor.h"
//Composition Class
class University {
private:
     string name;
     int canProfessor;
     int canAdministrative;
    int tamProfessor;
    int tamAdministrative;
	 Professor* professor;
	 Administrative* administrative;
	 Professor** professorList;
	 Administrative** administrativeList;

public:

	University();
	University(string);
	University(string, Professor*, Administrative*,int,int);
	virtual ~University();

    string getName() const;
    void setName(string name);

    Professor* getProfessor() const;
    void setProfessor(Professor* professor);

    Administrative* getAdministrative() const;
    void setAdministrative(Administrative* administrative);

    Professor** getProfessorList() const;
    void setProfessorList(Professor** professorList);

    Administrative** getAdministrativeList() const;
    void setAdministrativeList(Administrative** administrativeList);

    string addProfessor(Professor*);

    string addAdministrative(Administrative*);
    string   toString();
    

};