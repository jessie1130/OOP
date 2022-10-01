#include "PatientAccount.h"
#include "Surgery.cpp"
#include "Pharmacy.cpp"
#include "Surgery.h"
#include "Pharmacy.h"
#include <iostream>
#include <string> 
using namespace std;
PatientAccount::PatientAccount(){
			dailyrate=100;	//每日需付的錢 
			charge=0;
		}	//constructor

int PatientAccount::allcharge(){
			input();
			Surgery surgery;
			Pharmacy pharmacy;
			return day*dailyrate+surgery.surgerycharge()+pharmacy.medicineprice();
		}		//算住院金額 
void PatientAccount::input(){
			cout<<"請輸入患者名字 : ";
			cin>>name;
			cout<<"請輸入住院天數 : ";
			while(1){
				cin>>day;	//存入住院天數 
				if(cin.fail()){
					cin.clear();
					cin.ignore(999,'\n');
					cout<<"請重新輸入,只能輸入數字"<<endl;
				}
				else
					break;
			}	//檢查有無輸入整數以外的字 
			cout<<"患者名字 : "<<name<<endl;
			cout<<"患住院天數 : "<<day<<endl;
			cout<<"每日需付金額為 : "<<dailyrate<<endl;
			cout<<"住院金額 : "<<day*dailyrate<<endl;
		}	//輸入患者名字,住院天數

