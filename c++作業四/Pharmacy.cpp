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
		}	//計算手術費用
void Pharmacy::input(){
			cout<<"請輸入用藥種類的數量 : ";
			while(1){
				cin>>count;
				if(cin.fail()){
					cin.clear();
					cin.ignore(999,'\n');
					cout<<"請重新輸入,只能輸入數字"<<endl;
				}
				else
					break;
			}	//檢查有無輸入整數以外的字 
			cout<<"1. DILANTIN 30MG CAP."<<endl<<"2. LINPEMYCIN CAPSULES"<<endl<<"3. YU-FE DPOPS"<<endl<<"4. POCOMMI CREAM"<<endl<<"5. URESON CREAM"<<endl;
			for(int i=0;i<count;i++){
				cout<<"請輸入藥的種類, 請輸入1~5 : ";
				while(1){
					cin>>usedmedicine[i];
					if(cin.fail()){
						cin.clear();
						cin.ignore(999,'\n');
						cout<<"請重新輸入,只能輸入數字"<<endl;
					}
						else
							break;
				}	//檢查有無輸入整數以外的字 
				
			}
			for(int i=0;i<count;i++){
				cout<<"藥的名稱 : "<<medicinename[usedmedicine[i]-1]<<endl;
				cout<<"藥的價錢 : "<<medicinecost[usedmedicine[i]-1]<<endl;
			}
		}	//輸入用藥種類 
