#include "Pharmacy.h"
#include <iostream>
#include <string> 
using namespace std;
Pharmacy::Pharmacy(){
			medicinename[0]="1. DILANTIN 30MG CAP.";
			medicinename[1]="2. LINPEMYCIN CAPSULES";
			medicinename[2]="3. YU-FE DPOPS";
			medicinename[3]="4. POCOMMI CREAM";
			medicinename[4]="5. URESON CREAM";  
			medicinecost[0]=300;
			medicinecost[1]=400;
			medicinecost[2]=500;
			medicinecost[3]=600;
			medicinecost[4]=700;
		}	//constructor
int Pharmacy::medicineprice(){
				input();
				int price=0;
				for(int i=0;i<count;i++){
					price+=medicinecost[usedmedicine[i]-1];
				}
				return price;
		}	//�p���N�O��
void Pharmacy::input(){
			cout<<"�п�J���ĺ������ƶq : ";
			while(1){
				cin>>count;
				if(cin.fail()){
					cin.clear();
					cin.ignore(999,'\n');
					cout<<"�Э��s��J,�u���J�Ʀr"<<endl;
				}
				else
					break;
			}	//�ˬd���L��J��ƥH�~���r 
			cout<<"1. DILANTIN 30MG CAP."<<endl<<"2. LINPEMYCIN CAPSULES"<<endl<<"3. YU-FE DPOPS"<<endl<<"4. POCOMMI CREAM"<<endl<<"5. URESON CREAM"<<endl;
			for(int i=0;i<count;i++){
				cout<<"�п�J�Ī�����, �п�J1~5 : ";
				while(1){
					cin>>usedmedicine[i];
					if(cin.fail()){
						cin.clear();
						cin.ignore(999,'\n');
						cout<<"�Э��s��J,�u���J�Ʀr"<<endl;
					}
						else
							break;
				}	//�ˬd���L��J��ƥH�~���r 
				
			}
			for(int i=0;i<count;i++){
				cout<<"�Ī��W�� : "<<medicinename[usedmedicine[i]-1]<<endl;
				cout<<"�Ī����� : "<<medicinecost[usedmedicine[i]-1]<<endl;
			}
		}	//��J���ĺ��� 
