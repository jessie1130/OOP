#include "Customer.h"
#include <iostream>
#include <string>

Customer::Customer(){
	name=" ";
	address=" ";
	phone=" ";
}	//constructor 
void Customer::setname(string n){
	name=n;
}	//�s�J�W�r 
void Customer::setaddress(string a){
	address=a;
}	//�s�J�a�} 
void Customer::setphone(string p){
	phone=p;
}	//�s�J�q�ܸ��X 
void Customer::setdate(int d){
	date=d;
}	//�s�J�������� 
string Customer::getname(){
	return name;
}	//�^�ǦW�r 
string Customer::getaddress(){
	return address;
}	//�^�Ǧa�} 
string Customer::getphone(){
	return phone;
}	//�^�ǹq�ܸ��X 
int Customer::getdate(){
	return date;
}	//�^�Ǧ������� 
