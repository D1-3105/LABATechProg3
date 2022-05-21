#include "HourlyEmployer.h"

void HourlyEmployer::setSalary()
{
	this->salary = this->cost*this->hours;
}

void HourlyEmployer::setHours(int hours)
{
	this->hours = hours;
}

void HourlyEmployer::setCost(double cost)
{
	this->cost = cost;
}

void HourlyEmployer::Describe(std::ostream& out, bool enter)
{
	Employer::Describe(out, false);
	out << (&out == &std::cout ? "\nWork hours: " : "") << hours << (&out == &std::cout ? "\n" : " ");
	out << (&out == &std::cout ? "Cost of hour: " : "") << cost << (enter==true? "\n" : " ");
}

void HourlyEmployer::fillSalary(std::istream& inp)
{
	std::cout << (&std::cin == &inp ? "ENTER HOURS: ":"");
	inp >> hours;
	std::cout << (&std::cin == &inp ? "ENTER COST OF HOUR: " : "");
	inp >> cost;
	this->setSalary();
}


HourlyEmployer::~HourlyEmployer()
{
	Employer::~Employer();
	hours = 0;
}

