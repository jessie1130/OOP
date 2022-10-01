#ifndef MANAGER
#define MANAGER

class Manager{
	private:
		string name[100];
		string address[100];
		string phone[100];
		string make[100];
		string model[100];
		int year[100];
		int date[100];
		double partscharge[100];
		double laborcharge[100];
		double salestax[100];
		double totalcharge[100];
		int count;
		int temp[100];
	public:
		Manager();
		void setcustomer(string n,string a,string p,int d);
		void setcar(string m1,string m2,int y);
		void setservicequote(double p,double l,double s,double t);
		void serch(string n);
		void serch(int d);
		void erase();
};
#endif
