#include "PatientAccount.h"
#include "Surgery.cpp"
#include "Pharmacy.cpp"
#include "Surgery.h"
#include "Pharmacy.h"
#include <iostream>
#include <string> 
using namespace std;
PatientAccount::PatientAccount(){
			dailyrate=100;	//�C��ݥI���� 
			charge=0;
		}	//constructor

int PatientAccount::allcharge(){
			input();
			Surgery surgery;
			Pharmacy pharmacy;
			return day*dailyrate+surgery.surgerycharge()+pharmacy.medicineprice();
		}		//���|���B 
void PatientAccount::input(){
			cout<<"�п�J�w�̦W�r : ";
			cin>>name;
			cout<<"�п�J��|�Ѽ� : ";
			while(1){
				cin>>day;	//�s�J��|�Ѽ� 
				if(cin.fail()){
					cin.clear();
					cin.ignore(999,'\n');
					cout<<"�Э��s��J,�u���J�Ʀr"<<endl;
				}
				else
					break;
			}	//�ˬd���L��J��ƥH�~���r 
			cout<<"�w�̦W�r : "<<name<<endl;
			cout<<"�w��|�Ѽ� : "<<day<<endl;
			cout<<"�C��ݥI���B�� : "<<dailyrate<<endl;
			cout<<"��|���B : "<<day*dailyrate<<endl;
		}	//��J�w�̦W�r,��|�Ѽ�

