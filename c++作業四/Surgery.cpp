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
			surgeryname[0]="1. 闌尾切除術";
			surgeryname[1]="2. 心肌切除術";
			surgeryname[2]="3. 踝關節截除術";
			surgeryname[3]="4. 膝蓋骨復位術";
			surgeryname[4]="5. 甲狀腺全切除術";
		}	//constructor
int Surgery::surgerycharge(){
			input();
			return surgerycost[type-1];
		}		//計算手術費用
void Surgery::input(){
			cout<<"1. 闌尾切除術"<<endl<<"2. 心肌切除術"<<endl<<"3. 踝關節截除術"<<endl<<"4. 膝蓋骨復位術"<<endl<<"5. 甲狀腺全切除術"<<endl; 
			while(1){
				cout<<"請輸入你接受的手術, 1~5 : ";
				cin>>type;
				if(cin.fail()){
					cin.clear();
					cin.ignore(999,'\n');
					cout<<"請重新輸入,只能輸入數字"<<endl;
				}	//檢查有無輸入整數以外的字 
				else
					break;
			}
			cout<<"你接受的手術 : "<<surgeryname[type-1]<<endl;
			cout<<"手術價錢 : "<<surgerycost[type-1]<<endl;
		}	//輸入手術名稱	
