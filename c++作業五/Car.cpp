#include "Car.h"
#include <iostream>
#include <string>

Car::Car(){
	make=" ";
	model=" ";
	year=0;
}	//constructor
void Car::setmake(string m){
	make=m;
}	//存入公司名 
void Car::setmodel(string m){
	model=m;
}	//存入型號 
void Car::setyear(int y){
	year=y;
}	//存入年份 
string Car::getmake(){
	return make;
}	//回傳公司名 
string Car::getmodel(){
	return model;
}	//回傳型號 
int Car::getyear(){
	return year;
}	//回傳年份 

