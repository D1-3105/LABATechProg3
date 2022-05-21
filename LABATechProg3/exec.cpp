#include <iostream>
#include <fstream>
#include "Employer.h"
#include "HourlyEmployer.h";
#include "PercentEmployer.h";
#include "StateEmployer.h";
#include "utils.h"
#include <variant>
int menu() {
	std::cout << "\t1) Employer\n";
	std::cout << "\t2) State employer\n";
	std::cout << "\t3) Hourly paid employer\n";
	std::cout << "\t4) Percently paid employer\n";
	std::cout << "\t5) Show data\n";
	std::cout << "\t6) Rewrite data file\n";
	std::cout << "->";
	int mode;
	std::cin >> mode;
	return mode;
}

int main() {
	std::string initfile = ".\\data.txt";
	Employers *employers= new Employers[0]; // std::variant!
	std::size_t size=0;
	while (true) {
		switch (menu()) {
		case 1: {
			Employer emp;
			emp.fillData();
			employers = expand<Employer>(employers, size, emp);
			break;
		}
		case 2: {
			StateEmployer emp;
			emp.fillData();
			employers = expand< StateEmployer>(employers, size, emp);
			break;
		}
		case 3: {
			HourlyEmployer emp;
			emp.fillData();
			employers = expand< HourlyEmployer>(employers, size, emp);
			break;
		}
		case 4: {
			PercentEmployer emp;
			emp.fillData();
			employers = expand< PercentEmployer>(employers, size, emp);
			break;
		}
		case 5: {
			for (int i = 0; i < size; i++) {
				std::visit(CallDescribe{ std::cout }, employers[i]);
			}
			break;
		}
		case 6: {
			std::ofstream fout(initfile, std::ios_base::out);
			for (int i = 0; i < size; i++) {
				std::visit(CallDescribe{ fout }, employers[i]);
			}
			fout.close();
			break;
		}
		}
		std::cout << "\n";
	}
	
}
