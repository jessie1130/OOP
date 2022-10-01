#ifndef SURGERY_H
#define SURGERY_H
//#include <iostream>
//#include <string> 
using namespace std;
class Surgery{
	private:
		int surgerycost[5];
		string surgeryname[5];
		int type;
		
	public:
		Surgery();
		int surgerycharge();
		void input();
};
#endif
