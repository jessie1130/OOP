#include "ServiceQuote.h"
#include <iostream>

ServiceQuote::ServiceQuote(){
	partscharge=0;
	laborcharge=0;
}	//constructor 
void ServiceQuote::setpartscharge(double s){
	partscharge=s;
}	//�s�J�s��O�� 
void ServiceQuote::setlaborcharge(double s){
	laborcharge=s;
}	//�s�J���׶O 
double ServiceQuote::getpartscharge(){
	return partscharge;
}	//�^�ǹs��O�� 
double ServiceQuote::getlaborcharge(){
	return laborcharge;
}	//�^�Ǻ��׶O 
double ServiceQuote::getsalestax(){
	return (partscharge+laborcharge)*0.05;
}	//�^����~�| 
double ServiceQuote::gettotalcharge(){
	return (partscharge+laborcharge)*1.05;
}	//�^���`���B 
