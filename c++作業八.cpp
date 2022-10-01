#include <iostream>
#include <fstream>
using namespace std;

class filter{
	protected:
		ifstream inf;
		ofstream outf;
	public:
		filter(char *in,char *out){
			inf.open(in);
			outf.open(out);
			if(!inf){
				cout<<"The file \""<<in<<"\" can not be opened."<<endl;
				exit(1);
			}
			if(!outf){
				cout<<"The file \""<<out<<"\" can not be opened."<<endl;
				exit(1);
			}
		}	//constructor+�ˬd�ɮ׬O�_�s�b 
		~filter(){
			inf.close();
			outf.close();
		}	//�����ɮ� 
		void doFilter(ifstream &in, ofstream &out){
			char ch,transch;
			in.get(ch);
			while(!in.fail()){
				transch=transform(ch);
				out.put(transch);
				in.get(ch);
			}
		}	//�N��J�ɮ��ন��X 
		virtual char transform(char ch)=0;
		void encrypt(){
			doFilter(inf,outf);
		}
		
};

class encryption:public filter{
	protected:
		int num;
	public:
		encryption(int n,char *in,char *out):filter(in,out){
			num=n;
		}	//constructor 
		virtual char transform(char ch){
			return ch+num;
		}	//�Ʀr�[�K 
};	

class uuppercase:public filter{
	public:
		uuppercase(char *in,char *out):filter(in,out){
		}	//constructor 
		virtual char transform(char ch){
			if(ch>=97&&ch<=122)
				return ch-32;
		}
};	//�ন�j�g 

class ccopy:public filter{
	public:
		ccopy(char *in,char *out):filter(in,out){
		}	//constructor 
		virtual char transform(char ch){
			return ch;
		}	//�ƻs�쥻���ɮ� 
};	

class space:public filter{
	public:
		space(char *in,char *out):filter(in,out){
		}	//constructor 
		virtual char transform(char ch){
			if(ch=='\n'||ch=='\r'){
				return ' ';
			}
		}	//����Ÿ��ন�Ů�
};	 

int main (){
	char infile[50],outfile[50];	//�x�s�ɮצW�� 
	cout<<"Please enter the name of file to input : ";
	cin>>infile;
	cout<<"Please enter the name of file to output encryption : ";
	cin>>outfile;
	int n;
	while(1){
		cout<<"Please input the number of encryption : ";
		cin>>n;	
		if(!cin){
			cin.clear();
			cin.ignore();
			cout<<"Please input again. You can only input integer."<<endl;
			continue;
		}
		break;
	}
	encryption e(n,infile,outfile);
	e.encrypt();
	cout<<"Please enter the name of file to output uppercase : ";
	cin>>outfile;
	uuppercase u(infile,outfile);
	u.encrypt();
	cout<<"Please enter the name of file to output copy : ";
	cin>>outfile;
	ccopy c(infile,outfile);
	c.encrypt();
	cout<<"Please enter the name of file to output line break changing to space : ";
	cin>>outfile;
	space s(infile,outfile);
	s.encrypt();
	return 0;
} 
