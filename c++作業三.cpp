#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
static string allcompany[100],allreport[100];	//存取所有的Company name和Report name
static int count=0;	//數名字放到底幾格 
class Heading{
	private:
		string company;
		string report;
		
	public:
		Heading(string s1="ABC Industries",string s2="Report"){
			company=s1;
			report=s2;
		}	//default constructor 
		void countname(){
			allcompany[count]=company;
			allreport[count]=report;
			count++;
		}	//將名字存入陣列 
		void input(){
			cout<<"Company name: ";
			getline(cin, company);
			cout<<"Report name: ";
			getline(cin, report);
		}	//輸入名字 
		static void center(string item){
		int itemLength=(81-item.length())/2;
		for(int i=0; i<itemLength; i++)
		cout<<" ";
		cout<<item<<endl;
		}	//將文字置中輸出 
		static print1line(string company,string report){
			string line=company+" "+report;
			center(line);	
		}	//以一行輸出 
		static print4line(string company,string report){
			string stars="*********************************************";
			center(stars);
			center(company);
			center(report);
		}	//以四行輸出 
};

int main(){
	string stars="*********************************************";
	char choise;	//判斷要不要輸入名字 
	while(1){
		cout<<"Please input the company name and report name"<<endl;
		cout<<"If you don't want to input, please input 1,else input 2.If you want to end this program, please input 3."<<endl;
		cin>>choise;
		cin.get();
		if(choise=='1'){
			Heading temp;
			temp.countname();
		}	//不輸入名字 
		else if(choise=='2'){
			Heading temp;
			temp.input();
			temp.countname();
		}	//輸入名字 
		else if(choise=='3'){
			break;
		}	//結束程式 
		else{
			cout<<"Please input again."<<endl;
			continue;
		}	//輸入1.2.3以外的東西要重新輸入 
	}
	cout<<"one line:"<<endl;
	for(int j=0;j<count;j++){
		Heading::print1line(allcompany[j],allreport[j]);
	}	//以一行一行輸出 
	cout<<"four lines:"<<endl;
	for(int j=0;j<count;j++){
		Heading::print4line(allcompany[j],allreport[j]);
	}	//以四行四行輸出 
	Heading::center(stars);
	return 0;
	
}
