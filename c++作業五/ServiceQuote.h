#ifndef SERVICEQUOTE
#define SERVICEQUOTE

class ServiceQuote{
	private:
		double partscharge;
		double laborcharge;
	public:
		ServiceQuote();
		void setpartscharge(double s);
		void setlaborcharge(double s);
		double getpartscharge();
		double getlaborcharge();
		double getsalestax();
		double gettotalcharge();
};
#endif
