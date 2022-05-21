#include "PercentEmployer.h"

void PercentEmployer::Describe(std::ostream& out, bool enter)
{
	Employer::Describe(out, false);
	out << (&out == &std::cout ? "\nSolds: " : "") << solds << (&out == &std::cout ? "\n" : " ");
	out << (&out == &std::cout ? "Percentage: " : "") << percentage << (enter == true ? "\n" : " ");
}

void PercentEmployer::setPercentage(double percentage)
{
	this->percentage = percentage;
}

void PercentEmployer::setSolds(double solds)
{
	this->solds = solds;
}

void PercentEmployer::setSalary()
{
	this->salary = this->percentage * this->solds;
}

void PercentEmployer::fillSalary(std::istream& inp)
{
	std::cout << (&std::cin == &inp ? "ENTER SOLDS: " : "");
	inp >> solds;
	std::cout << (&std::cin == &inp ? "ENTER PERCENTAGE: " : "");
	inp >> percentage;
	this->setSalary();
}

PercentEmployer::~PercentEmployer()
{
	Employer::~Employer();
	this->percentage = 0;
	this->solds = 0;
	this->percentage = 0;
}
