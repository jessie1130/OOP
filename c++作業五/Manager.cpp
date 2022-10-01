#include "Manager.h"
#include <iostream>
#include <string>

Manager::Manager(){
	for(int i=0;i<100;i++){
		name[i]=" ",address[i]=" ",phone[i]=" ",make[i]=" ",model[i]=" ",year[i]=0,date[i]=0,partscharge[i]=0.0,laborcharge[i]=0.0,salestax[i]=0.0,totalcharge[i]=0.0;
	}
	count=0;
}	//constructor 
void Manager::setcustomer(string n,string a,string p,int d){
	name[count]=n,address[count]=a,phone[count]=p,date[count]=d;
}	//存入消費者資料 
void Manager::setcar(string m1,string m2,int y){
	make[count]=m1,model[count]=m2,year[count]=y;
}	//存入車子資料 
void Manager::setservicequote(double p,double l,double s,double t){
	partscharge[count]=p,laborcharge[count]=l,salestax[count]=s,totalcharge[count]=t;
	count++;
}	//存入估價單資料 
void Manager::serch(int d){
	int c=0;
	for(int i=0;i<count;i++){
		if(d==date[i]){
			temp[c]=i;
			c++;
		}
	}
	if(c==0){
		cout<<"----------------------------------------"<<endl;
		cout<<"Can't find the service quote."<<endl<<endl;
		cout<<"----------------------------------------"<<endl;
	}
	for(int i=0;i<c;i++){
		cout<<"----------------------------------------"<<endl;
		cout<<"Name : "<<name[temp[i]]<<endl;
		cout<<"Address : "<<address[temp[i]]<<endl;
		cout<<"Phone : "<<phone[temp[i]]<<endl;
		cout<<"Make : "<<make[temp[i]]<<endl;
		cout<<"Model : "<<model[temp[i]]<<endl;
		cout<<"Year : "<<year[temp[i]]<<endl;
		cout<<"Date : "<<date[temp[i]]<<endl;
		cout<<"Parts charge : "<<partscharge[temp[i]]<<endl;
		cout<<"Labor charge : "<<laborcharge[temp[i]]<<endl;
		cout<<"Sales tax : "<<salestax[temp[i]]<<endl;
		cout<<"Total charge : "<<totalcharge[temp[i]]<<endl;
	}
	cout<<"----------------------------------------"<<endl;
}	//以日期查詢並印出估價單 
void Manager::serch(string n){
	int c=0;
	for(int i=0;i<count;i++){
		if(n==name[i]){
			temp[c]=i;
			c++;
		}
	}
	if(c==0){
		cout<<"----------------------------------------"<<endl;
		cout<<"Can't find the service quote."<<endl<<endl;
	}
	for(int i=0;i<c;i++){
		cout<<"----------------------------------------"<<endl;
		cout<<"Name : "<<name[temp[i]]<<endl;
		cout<<"Address : "<<address[temp[i]]<<endl;
		cout<<"Phone : "<<phone[temp[i]]<<endl;
		cout<<"Make : "<<make[temp[i]]<<endl;
		cout<<"Model : "<<model[temp[i]]<<endl;
		cout<<"Year : "<<year[temp[i]]<<endl;
		cout<<"Date : "<<date[temp[i]]<<endl;
		cout<<"Parts charge : "<<partscharge[temp[i]]<<endl;
		cout<<"Labor charge : "<<laborcharge[temp[i]]<<endl;
		cout<<"Sales tax : "<<salestax[temp[i]]<<endl;
		cout<<"Total charge : "<<totalcharge[temp[i]]<<endl;
	}
	cout<<"----------------------------------------"<<endl;
}	//以名字查詢並印出估價單 
void Manager::erase(){
	for(int i=0;i<100;i++){
		name[i]=" ",address[i]=" ",phone[i]=" ",make[i]=" ",model[i]=" ",year[i]=0,date[i]=0,partscharge[i]=0.0,laborcharge[i]=0.0,salestax[i]=0.0,totalcharge[i]=0.0;
	}
	count=0;
}	//刪除估價單(歸零) 
