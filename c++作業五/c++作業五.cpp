#include <iostream>
#include <string>
#include "Customer.h"
#include "Customer.cpp"
#include "Car.h"
#include "Car.cpp"
#include "ServiceQuote.h"
#include "ServiceQuote.cpp"
#include "Manager.h"
#include "Manager.cpp"

using namespace std;

int main(){
	Customer customer;
	Car car;
	ServiceQuote servicequote;
	Manager manager;
	int choice1,choice2,date,year;
	string name,address,phone,make,model;
	double partscharge,laborcharge;
	while(1){
		cout<<"If you want to get a service quote, please input 1."<<endl<<"If you want to serch for a service quote, please input 2."<<endl<<"If you want to delete the whole service quote, please input 3."<<endl<<"If you want to end this program, please input 4.";
		cout<<"Your choice is : ";
		cin>>choice1;
		if(!cin){
			cout<<"Please input again, you can only input 1, 2, 3, or 4."<<endl<<endl;
			cin.clear();
			cin.ignore();
			continue;
		}	//判斷輸入是否為整數 
		if(choice1==4){
			break;
		}	//離開系統 
		switch(choice1){
			case 1:	//輸入資料 
				cout<<endl;
				cout<<"Please input the customer's name : ";
				cin>>name;
				customer.setname(name);
				cout<<"Please input the customer's address : ";
				cin>>address;
				customer.setaddress(address);
				cout<<"Please input the customer's phone : ";
				cin>>phone;
				customer.setaddress(phone);
				cout<<"Please input today's date(e.g today is 5/2, please input 502) : ";
				cin>>date;
				customer.setdate(date);
				cout<<"Please input the car's make : ";
				cin>>make;
				car.setmake(make);
				cout<<"Please input the car's model : ";
				cin>>model;
				car.setmodel(model);
				cout<<"Please input the car's year : ";
				cin>>year;
				car.setyear(year);
				cout<<"Please input the  estimated parts charges :";
				cin>>partscharge;
				servicequote.setpartscharge(partscharge);
				cout<<"Please input the  estimated labor charges :";
				cin>>laborcharge;
				servicequote.setlaborcharge(laborcharge);
				cout<<"----------------------------------------"<<endl;
				cout<<"The Service Quote"<<endl;
				cout<<"Name : "<<customer.getname()<<endl;
				cout<<"Address : "<<customer.getaddress()<<endl;
				cout<<"Phone : "<<customer.getphone()<<endl;
				cout<<"Date : "<<customer.getdate()<<endl;
				cout<<"Make : "<<car.getmake()<<endl;
				cout<<"Model : "<<car.getmodel()<<endl;
				cout<<"Year : "<<car.getyear()<<endl;
				cout<<"Parts charge : "<<servicequote.getpartscharge()<<endl;
				cout<<"Labor charge : "<<servicequote.getlaborcharge()<<endl;
				cout<<"Sales tax : "<<servicequote.getsalestax()<<endl;
				cout<<"Total charge : "<<servicequote.gettotalcharge()<<endl;
				cout<<"----------------------------------------"<<endl;
				manager.setcustomer(name,address,phone,date);
				manager.setcar(make,model,year);
				manager.setservicequote(partscharge,laborcharge,servicequote.getsalestax(),servicequote.gettotalcharge());
				break;
			case 2:	//查詢估價單 
				while(1){
					cout<<endl;
					cout<<"Please input the customer's name or the date of the service quote."<<endl<<"If you want to input the customer's name, please input 1, or input 2."<<endl;
					cout<<"Your choice is : ";
					cin>>choice2;
					if(!cin||(choice2!=1&&choice2!=2)){
						cout<<"Please input again, you can only input 1 or 2."<<endl<<endl;
						cin.clear();
						cin.ignore();
						continue;
					}
					break;
				}
				if(choice2==1){
					cout<<endl;
					cout<<"Please input the customer's name : ";
					cin>>name;
					manager.serch(name);
				}	//以名字查詢估價單 
				else{
					cout<<endl;
					cout<<"Please input the date of the service quote : ";
					cin>>date;
					manager.serch(date);
				}	//以日期查詢估價單 
				break;
			case 3:	//刪除估價單 
				manager.erase();
				cout<<endl;
				cout<<"The whole service quote has been deleted."<<endl<<endl;
				break;
			default:
				cout<<endl;
				cout<<"Please input again, you can only input 1, 2, 3, or 4."<<endl<<endl;
				continue;
		}
	}
} 
