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
}	//�s�J���q�W 
void Car::setmodel(string m){
	model=m;
}	//�s�J���� 
void Car::setyear(int y){
	year=y;
}	//�s�J�~�� 
string Car::getmake(){
	return make;
}	//�^�Ǥ��q�W 
string Car::getmodel(){
	return model;
}	//�^�ǫ��� 
int Car::getyear(){
	return year;
}	//�^�Ǧ~�� 

