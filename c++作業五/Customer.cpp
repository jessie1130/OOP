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
}	//存入名字 
void Customer::setaddress(string a){
	address=a;
}	//存入地址 
void Customer::setphone(string p){
	phone=p;
}	//存入電話號碼 
void Customer::setdate(int d){
	date=d;
}	//存入估價單日期 
string Customer::getname(){
	return name;
}	//回傳名字 
string Customer::getaddress(){
	return address;
}	//回傳地址 
string Customer::getphone(){
	return phone;
}	//回傳電話號碼 
int Customer::getdate(){
	return date;
}	//回傳估價單日期 
