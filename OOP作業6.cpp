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
		}	//將輸入存入變數 
		int getcm(){
			return centimeters;
		}	//回傳公分 
		int getmm(){
			return millimeters;
		}	//回傳毫米 
		int getlength(){
			return (getcm()*10)+getmm();
		}	//回傳總長度(mm) 
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
			}	//輸入第一個邊長的公分且只能輸入正整數 
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
			}	//輸入第一個邊長的毫米且只能輸入正整數 
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
			}	//輸入第二個邊長的公分且只能輸入正整數 
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
			}	//輸入第二個邊長的毫米且只能輸入正整數 
			b.setLength(cm,mm);
		}
		void getSides(){
			cout<<"The side is "<<a.getlength()<<" millimeters."<<endl;
			cout<<"The another side is "<<b.getlength()<<" millimeters."<<endl;
		}	//輸出兩邊長(mm) 
		bool isSquare(){
			return a==b;
		}	//判斷是否為正方形 
		int getArea(){
			return a*b;
		}	//回傳面積(mm*mm) 
		int getPerimeter(){
			return 2*(a+b);
		}	//回傳周長 
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
