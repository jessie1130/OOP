//�W�ߧ@�~ S0854001 ��s�� 
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
		cout<<"�O�_�n�X�|,�п�JY��N : ";
		cin>>out;
		if(out=="y"||out=="Y"){
			cout<<"�O�_�X�| : �O"<<endl;
			break;
		}
		else if(out=="n"||out=="N"){
			cout<<"�O�_�X�| : �_"<<endl;
			break;
		}
		else{
			cout<<"�Э��s��J"<<endl; 
		}
	}while(1);
	cout<<"�`���B : "<<cost<<endl;
	return 0;
}
