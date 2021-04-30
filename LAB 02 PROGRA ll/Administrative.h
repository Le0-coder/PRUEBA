#include"Person.h"

using namespace std;

class Administrative :public Person {
private:
	double monthlySalary;
public:
	Administrative();
	Administrative(double);
	Administrative(string, string, int, double);
	virtual ~Administrative();

	double getMonthlySalary() const;
	void setMonthlySalary(double monthlySalary);

	double salary()override;
	string toString();
};