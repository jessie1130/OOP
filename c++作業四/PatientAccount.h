#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include <iostream>
#include <string> 
using namespace std;
class PatientAccount{
	private:
		int dailyrate;
		int day;
		int charge;
		string name;
	public:
		PatientAccount();
		int allcharge();
		void input();
};
#endif
