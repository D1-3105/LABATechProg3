#pragma once
#include "Employer.h"
class StateEmployer final : public Employer {
private:
	std::string position;
public:
	void setSalary(double salary);
	StateEmployer(): Employer() {
		Employer::type_name = "State_Employer";
	};
	StateEmployer(std::string name, std::string surname,
		std::string telnum, std::string address) :Employer(name, surname, telnum, address) {
		Employer::type_name = "State_Employer";
	};
	~StateEmployer();
	void fillSalary(std::istream& inp = std::cin) override;
	void Describe(std::ostream& out = std::cout, bool enter = false) override;
};