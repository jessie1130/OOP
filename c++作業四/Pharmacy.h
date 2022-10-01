#ifndef PHARMACY_H
#define PHARMACY_H
//#include <iostream>
//#include <string> 
using namespace std;
class Pharmacy{
	private:
		int count,type,medicinecost[5],usedmedicine[5];
		string medicinename[5];
		
	public:
		Pharmacy();
		int medicineprice();
		void input();
};
#endif
