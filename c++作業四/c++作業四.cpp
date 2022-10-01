//獨立作業 S0854001 唐孟婕 
#include <iostream>
#include <string> 
#include "PatientAccount.h"
#include "PatientAccount.cpp"

using namespace std;

int main(){
	string  out;
	int cost;
	PatientAccount patientaccount;
	cost=patientaccount.allcharge();
	
	do{
		cout<<"是否要出院,請輸入Y或N : ";
		cin>>out;
		if(out=="y"||out=="Y"){
			cout<<"是否出院 : 是"<<endl;
			break;
		}
		else if(out=="n"||out=="N"){
			cout<<"是否出院 : 否"<<endl;
			break;
		}
		else{
			cout<<"請重新輸入"<<endl; 
		}
	}while(1);
	cout<<"總金額 : "<<cost<<endl;
	return 0;
}
