#ifndef CAR
#define CAR

class Car{
	private:
		string make;
		string model;
		int year;
	public:
		Car();
		void setmake(string m);
		void setmodel(string m);
		void setyear(int y);
		string getmake();
		string getmodel();
		int getyear();
		int getdate();
};
#endif
