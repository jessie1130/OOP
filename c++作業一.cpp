#include <iostream>

using namespace std;
void determine(int *a);
int total(int a,int b,int c,int d);
int total(int a,int b);
int main(){
	int x,totalcharges;	//x用來判斷是哪種病人 
	int a,b,c,d;	//a是the number of days spent in the hospital,b是 the daily rate,c是charges for hospita; services(lab tests, etc.),d是hospital medication charges
	do{
		cout<<"If you are an inpatient, please input 1, else input 2.";
		cin>>x;
	}while(x!=1&&x!=2);
	if(x==1){
		cout<<"Please input the number of days spent in the hospital.(It can't be 0.)";
		cin>>a;
		determine(&a);
		cout<<"Please input the daily rate.(It can't be 0.)";
		cin>>b;
		determine(&b);
		cout<<"Please input charges for hospita; services(lab tests, etc.).(It can't be 0.)";
		cin>>c;
		determine(&c);
		cout<<"Please input hospital medication charges.(It can't be 0.)";
		cin>>d;
		determine(&d);
		totalcharges=total(a,b,c,d);
	}	//如果是inpatient 
	else{
		cout<<"Please input charges for hospita; services(lab tests, etc.).(It can't be 0.)";
		cin>>c;
		determine(&c);
		cout<<"Please input hospital medication charges.(It can't be 0.)";
		cin>>d;
		determine(&d);
		totalcharges=total(c,d);
	}	//如果是outpatient 
	 cout<<"Your total charges are "<<totalcharges<<endl;
	 return 0;
} 

void determine(int *a)	//判斷輸入項目是否為0 
{
	int x=*a;
	while(x<=0){
		cout<<"Please input it again.(It can't be 0.)";
		cin>>x;
	}
	*a=x;
}	
int total(int a,int b,int c,int d)	//計算inpatient費用
{
	return a*b+c+d;
}	
int total(int a,int b)	//計算outpatient費用 
{
	return a+b;
} 	
