#pragma once
#include "Employer.h"

class HourlyEmployer final : public Employer {
private:
	int hours;
	double cost;
public:
	void setSalary();
	void setHours(int hours);
	void setCost(double cost);
	HourlyEmployer() : Employer(), hours(0), cost(0) {
		Employer::type_name = "Hourly_Employer";
	};
	HourlyEmployer(std::string name, std::string surname,
		std::string telnum, std::string address) :Employer(name, surname, telnum, address), hours(0), cost(0) {
		Employer::type_name = "Hourly_Employer";
	};
	void Describe(std::ostream& out = std::cout, bool enter = false);
	void fillSalary(std::istream& inp = std::cin) override;
	~HourlyEmployer();
};
