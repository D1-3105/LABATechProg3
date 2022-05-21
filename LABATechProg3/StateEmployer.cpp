#include "StateEmployer.h"

void StateEmployer::setSalary(double salary)
{
	this->salary = salary;
}

StateEmployer::~StateEmployer()
{
	Employer::~Employer();
	this->position = "";
}

void StateEmployer::fillSalary(std::istream& inp)
{
	Employer::fillSalary(inp);
	std::cout << (&inp == &std::cin ? "ENTER POSITION: " : "");
	inp >> position;
}

void StateEmployer::Describe(std::ostream& out, bool enter)
{
	Employer::Describe(out, false);
	out << (&out == &std::cout ? "\nWork position: " : "") << position << (enter==true?"\n":" ");
}
