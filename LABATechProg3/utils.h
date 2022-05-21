#pragma once
#include "Employer.h"
#include "HourlyEmployer.h";
#include "PercentEmployer.h";
#include "StateEmployer.h";
#include <variant>

typedef std::variant< HourlyEmployer, PercentEmployer, StateEmployer, Employer> Employers;

struct CallDescribe{
	template<class T>
	void operator()(T& emp) {
		emp.Describe(out, enter);
	}
	std::ostream& out;
	bool enter=true;
};



template<class T>
Employers* expand(Employers* old, size_t& size, T& newElem) {
	Employers* newArr = new Employers[size + 1];
	for (int i = 0; i < size; i++) {
		newArr[i] = old[i];
	}
	newArr[size] = newElem;
	size++;
	return newArr;
}

//
//Employer* expand(Employer* old, size_t& size, Employer& newElem) {
//	Employer* newArr = new Employer[size + 1];
//	for (int i = 0; i < size; i++) {
//		newArr[i] = old[i];
//	}
//	newArr[size] = newElem;
//	size++;
//	return newArr;
//}