#include <iostream>

using namespace std;
void determine(int *a);
int total(int a,int b,int c,int d);
int total(int a,int b);
int main(){
	int x,totalcharges;	//x�ΨӧP�_�O���دf�H 
	int a,b,c,d;	//a�Othe number of days spent in the hospital,b�O the daily rate,c�Ocharges for hospita; services(lab tests, etc.),d�Ohospital medication charges
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
	}	//�p�G�Oinpatient 
	else{
		cout<<"Please input charges for hospita; services(lab tests, etc.).(It can't be 0.)";
		cin>>c;
		determine(&c);
		cout<<"Please input hospital medication charges.(It can't be 0.)";
		cin>>d;
		determine(&d);
		totalcharges=total(c,d);
	}	//�p�G�Ooutpatient 
	 cout<<"Your total charges are "<<totalcharges<<endl;
	 return 0;
} 

void determine(int *a)	//�P�_��J���جO�_��0 
{
	int x=*a;
	while(x<=0){
		cout<<"Please input it again.(It can't be 0.)";
		cin>>x;
	}
	*a=x;
}	
int total(int a,int b,int c,int d)	//�p��inpatient�O��
{
	return a*b+c+d;
}	
int total(int a,int b)	//�p��outpatient�O�� 
{
	return a+b;
} 	
