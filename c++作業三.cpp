#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
static string allcompany[100],allreport[100];	//�s���Ҧ���Company name�MReport name
static int count=0;	//�ƦW�r��쩳�X�� 
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
		}	//�N�W�r�s�J�}�C 
		void input(){
			cout<<"Company name: ";
			getline(cin, company);
			cout<<"Report name: ";
			getline(cin, report);
		}	//��J�W�r 
		static void center(string item){
		int itemLength=(81-item.length())/2;
		for(int i=0; i<itemLength; i++)
		cout<<" ";
		cout<<item<<endl;
		}	//�N��r�m����X 
		static print1line(string company,string report){
			string line=company+" "+report;
			center(line);	
		}	//�H�@���X 
		static print4line(string company,string report){
			string stars="*********************************************";
			center(stars);
			center(company);
			center(report);
		}	//�H�|���X 
};

int main(){
	string stars="*********************************************";
	char choise;	//�P�_�n���n��J�W�r 
	while(1){
		cout<<"Please input the company name and report name"<<endl;
		cout<<"If you don't want to input, please input 1,else input 2.If you want to end this program, please input 3."<<endl;
		cin>>choise;
		cin.get();
		if(choise=='1'){
			Heading temp;
			temp.countname();
		}	//����J�W�r 
		else if(choise=='2'){
			Heading temp;
			temp.input();
			temp.countname();
		}	//��J�W�r 
		else if(choise=='3'){
			break;
		}	//�����{�� 
		else{
			cout<<"Please input again."<<endl;
			continue;
		}	//��J1.2.3�H�~���F��n���s��J 
	}
	cout<<"one line:"<<endl;
	for(int j=0;j<count;j++){
		Heading::print1line(allcompany[j],allreport[j]);
	}	//�H�@��@���X 
	cout<<"four lines:"<<endl;
	for(int j=0;j<count;j++){
		Heading::print4line(allcompany[j],allreport[j]);
	}	//�H�|��|���X 
	Heading::center(stars);
	return 0;
	
}
