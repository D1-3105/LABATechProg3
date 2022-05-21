#include "Employer.h"

Employer::Employer(const Employer& emp)
{
	name = emp.name;
	surname = emp.surname;
	telnum = emp.telnum;
	address = emp.address;
	salary = emp.salary;
}

void Employer::setSalary(double s)
{
	salary = s;
}

void Employer::setName(std::string name)
{
	this->name = name;
}

void Employer::setSurname(std::string surname)
{
	this->surname = surname;
}

void Employer::setTelnum(std::string tel)
{
	this->telnum = tel;
}

void Employer::setAddress(std::string adress)
{
	this->address = address;
}

std::string Employer::getName()
{
	return name;
}

std::string Employer::getSurname()
{
	return surname;
}

std::string Employer::getTelnum()
{
	return telnum;
}

std::string Employer::getAddress()
{
	return address;
}

double Employer::getSalary()
{
	return salary;
}

void Employer::Describe(std::ostream& out, bool enter)
{
	if (&out == &std::cout) {
		out << "--------------------------------------" << "\n";
	}
	out << this->type_name << (&out == &std::cout ? "\n" : " ");
	if (&out == &std::cout) {
		out << "Count: " << count << "\n";
	}
	out<< (&out == &std::cout ? "Name: " : "") << name << (&out == &std::cout?"\n":" ");
	out << (&out == &std::cout ? "Surname: " : "") << surname << (&out == &std::cout ? "\n" : " ");
	out << (&out == &std::cout ? "Phone number: ": "") <<telnum << (&out == &std::cout ? "\n" : " ");
	out << (&out == &std::cout ? "Address: " : "") <<address << (&out == &std::cout ? "\n" : " ");
	out << (&out == &std::cout ? "Salary: " : "") << salary << (enter == true ? "\n" : " ");
}

void Employer::fillData(std::istream& inp)
{
	count++;
	std::cout << (&inp == &std::cin? "ENTER NAME: ":"");
	inp >> name;
	std::cout << (&inp == &std::cin ? "ENTER SURNAME: ":"");
	inp >> surname;
	std::cout << (&inp == &std::cin ? "ENTER PHONE NUMBER: ":"");
	inp >> telnum;
	std::cout << (&inp == &std::cin ? "ENTER ADDRESS: ":"");
	inp >> address;
	this->fillSalary(inp);
}

void Employer::fillSalary(std::istream& inp)
{
	std::cout << (&inp == &std::cin ? "ENTER SALARY: " : "");
	inp >> salary;
}

Employer::~Employer()
{
	address="";
	telnum="";
	address = "";
	surname = "";
	salary = 0;
}
int Employer::count = 0;