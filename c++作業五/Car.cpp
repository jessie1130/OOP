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
}	//¦s¤J¤½¥q¦W 
void Car::setmodel(string m){
	model=m;
}	//¦s¤J«¬¸¹ 
void Car::setyear(int y){
	year=y;
}	//¦s¤J¦~¥÷ 
string Car::getmake(){
	return make;
}	//¦^¶Ç¤½¥q¦W 
string Car::getmodel(){
	return model;
}	//¦^¶Ç«¬¸¹ 
int Car::getyear(){
	return year;
}	//¦^¶Ç¦~¥÷ 

