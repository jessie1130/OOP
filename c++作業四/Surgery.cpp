#include "Surgery.h"
#include <iostream>
#include <string> 
using namespace std;
Surgery::Surgery(){
			surgerycost[0]=3000;
			surgerycost[1]=10000;
			surgerycost[2]=2000;
			surgerycost[3]=1000;
			surgerycost[4]=5000;
			surgeryname[0]="1. ��������N";
			surgeryname[1]="2. �ߦ٤����N";
			surgeryname[2]="3. �����`�I���N";
			surgeryname[3]="4. ���\���_��N";
			surgeryname[4]="5. �Ҫ����������N";
		}	//constructor
int Surgery::surgerycharge(){
			input();
			return surgerycost[type-1];
		}		//�p���N�O��
void Surgery::input(){
			cout<<"1. ��������N"<<endl<<"2. �ߦ٤����N"<<endl<<"3. �����`�I���N"<<endl<<"4. ���\���_��N"<<endl<<"5. �Ҫ����������N"<<endl; 
			while(1){
				cout<<"�п�J�A��������N, 1~5 : ";
				cin>>type;
				if(cin.fail()){
					cin.clear();
					cin.ignore(999,'\n');
					cout<<"�Э��s��J,�u���J�Ʀr"<<endl;
				}	//�ˬd���L��J��ƥH�~���r 
				else
					break;
			}
			cout<<"�A��������N : "<<surgeryname[type-1]<<endl;
			cout<<"��N���� : "<<surgerycost[type-1]<<endl;
		}	//��J��N�W��	
