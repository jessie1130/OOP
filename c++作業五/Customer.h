#ifndef CUSTOMER
#define CUSTOMER 
#include <string>
using namespace std;
class Customer{
	private:
		string name;
		string address;
		string phone;
		int date;
	
	public:
		Customer();
		void setname(string n);
		void setaddress(string a);
		void setphone(string p);
		void setdate(int d);
		string getname();
		string getaddress();
		string getphone();
		int getdate();
};
#endif
