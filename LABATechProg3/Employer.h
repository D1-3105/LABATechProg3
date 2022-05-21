#include <string>
#include <iostream>
#pragma once
class Employer {
private:
	std::string name;
	std::string surname;
	std::string telnum;
	std::string address;
	static int count;
protected:
	double salary;
public:
	std::string type_name = "Employer";
	Employer() : name(""), surname(""), telnum(""), address(""), salary(0) {
	};
	Employer(std::string name, std::string surname, std::string telnum, std::string address) :name(name), surname(surname),
		telnum(telnum), address(address), salary(0) {
	};
	Employer(const Employer& emp);
	~Employer();
	void setSalary(double s);
	virtual void setName(std::string name);
	virtual void setSurname(std::string surname);
	virtual void setTelnum(std::string tel);
	virtual void setAddress(std::string adress);
	virtual std::string getName();
	virtual std::string getSurname();
	virtual std::string getTelnum();
	virtual std::string getAddress();
	virtual double getSalary();
	virtual void Describe(std::ostream& out=std::cout, bool enter=false);
	virtual void fillData(std::istream& inp = std::cin);
	virtual void fillSalary(std::istream& inp = std::cin);
};
