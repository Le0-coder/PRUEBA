#include"Person.h"

using namespace std;

class Professor : public Person {
private:
	double monthlySalary;
	double commissionRate;
public:
	Professor();
	Professor(double , double);
	Professor(string, string, int, double, double);
	virtual ~Professor();

    double getMonthlySalary() const;
    void setMonthlySalary(double monthlySalary);
    double getCommissionRate() const;
    void setCommissionRate(double commissionRate);

	double salary() override;
	string toString()override;
};