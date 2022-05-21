#pragma once
#include "Employer.h"

class PercentEmployer final : public Employer {
private:
	double percentage;
	double solds;
public:
	PercentEmployer() : Employer(), solds(0.0), percentage(0.0) {
		Employer::type_name = "Percent_Employer";
	};
	PercentEmployer(std::string name, std::string surname,
		std::string telnum, std::string address) :Employer(name, surname, telnum, address), solds(0.0), percentage(0.0) {
		Employer::type_name = "Percent_Employer";
	};
	void Describe(std::ostream& out = std::cout, bool enter = false) override;
	void setPercentage(double percentage);
	void setSolds(double solds);
	void setSalary();
	void fillSalary(std::istream& inp = std::cin) override;
	~PercentEmployer();
};