#include <iostream>

using namespace std;

class Length{
	private:
		int centimeters;	//cm
		int millimeters;	//mm
	public:
		Length(){
			centimeters=0,millimeters=0;
		}	//default constructor
		Length(int cm,int mm){
			setLength(cm,mm);
		}	//constructor
		void setLength(int cm,int mm){
			centimeters=cm,millimeters=mm;
		}	//�N��J�s�J�ܼ� 
		int getcm(){
			return centimeters;
		}	//�^�Ǥ��� 
		int getmm(){
			return millimeters;
		}	//�^�ǲ@�� 
		int getlength(){
			return (getcm()*10)+getmm();
		}	//�^���`����(mm) 
		friend bool operator==(Length a,Length b){
			return a.getlength()==b.getlength();
		}	//overloaded== 
		friend int operator+(Length a,Length b){
			return a.centimeters*10+b.centimeters*10+a.millimeters+b.millimeters;
		}	//overloaded+
		friend int operator*(Length a,Length b){
			return (a.centimeters*10+a.millimeters)*(b.centimeters*10+b.millimeters);
		}	//overloaded*
};
class Rectangle{
	private:
		Length a;
		Length b;
	public:
		void setSides(){
			int cm,mm;
			while(1){
				cout<<"Please input the centimeters : ";
				cin>>cm;
				if(!cin||cm<0){
					cout<<"Only can input positive integer."<<endl;
					cin.clear();
					cin.ignore();
					continue;
				}
				break;
			}	//��J�Ĥ@������������B�u���J����� 
			while(1){
				cout<<"Please inout the millimeters : ";
				cin>>mm;
				if(!cin||mm<0){
					cout<<"Only can input positive integer."<<endl;
					cin.clear();
					cin.ignore();
					continue;
				}
				break;
			}	//��J�Ĥ@��������@�̥B�u���J����� 
			a.setLength(cm,mm);
			while(1){
				cout<<"Please input the another centimeters : ";
				cin>>cm;
				if(!cin||cm<0){
					cout<<"Only can input positive integer."<<endl;
					cin.clear();
					cin.ignore();
					continue;
				}
				break;
			}	//��J�ĤG������������B�u���J����� 
			while(1){
				cout<<"Please inout the another millimeters : ";
				cin>>mm;
				if(!cin||mm<0){
					cout<<"Only can input positive integer."<<endl;
					cin.clear();
					cin.ignore();
					continue;
				}
				break;
			}	//��J�ĤG��������@�̥B�u���J����� 
			b.setLength(cm,mm);
		}
		void getSides(){
			cout<<"The side is "<<a.getlength()<<" millimeters."<<endl;
			cout<<"The another side is "<<b.getlength()<<" millimeters."<<endl;
		}	//��X�����(mm) 
		bool isSquare(){
			return a==b;
		}	//�P�_�O�_������� 
		int getArea(){
			return a*b;
		}	//�^�ǭ��n(mm*mm) 
		int getPerimeter(){
			return 2*(a+b);
		}	//�^�ǩP�� 
};

int main(){
	Rectangle r;
	r.setSides();
	r.getSides();
	if(r.isSquare()){
		cout<<"It is a square."<<endl;
	}
	else{
		cout<<"It is not a square."<<endl;
	}
	cout<<"The area is "<<r.getArea()<<" square millimerers."<<endl;
	cout<<"The perimeter is "<<r.getPerimeter()<<" millimeters."<<endl;
	return 0;
}
