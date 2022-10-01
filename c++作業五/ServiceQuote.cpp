#include "ServiceQuote.h"
#include <iostream>

ServiceQuote::ServiceQuote(){
	partscharge=0;
	laborcharge=0;
}	//constructor 
void ServiceQuote::setpartscharge(double s){
	partscharge=s;
}	//存入零件費用 
void ServiceQuote::setlaborcharge(double s){
	laborcharge=s;
}	//存入維修費 
double ServiceQuote::getpartscharge(){
	return partscharge;
}	//回傳零件費用 
double ServiceQuote::getlaborcharge(){
	return laborcharge;
}	//回傳維修費 
double ServiceQuote::getsalestax(){
	return (partscharge+laborcharge)*0.05;
}	//回傳營業稅 
double ServiceQuote::gettotalcharge(){
	return (partscharge+laborcharge)*1.05;
}	//回傳總金額 
