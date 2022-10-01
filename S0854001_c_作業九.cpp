#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream infile;
	char s[50];
	int t=0,num;
	cout<<"Please input the name of file : ";
	cin>>s;
	infile.open(s);
	if(!infile){
		cout<<"The file can't be opened.";
		exit(1);
	}
	string temp;
	while(infile>>temp){
		num=temp.length();
		if(num<=15&&num>=8){
			cout<<temp<<" : "<<num<<endl;
			t++;
		}
	}
	cout<<"The total number of string between 8~15 is : "<<t;
	infile.close();
	
}
