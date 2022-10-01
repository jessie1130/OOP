#include <iostream> 

using namespace std;

class Publication{
	public:
		string title;
		int volume,year;
		Publication(){
			title=" ";
			volume=0;
			year=0;
		}	//constructor 
		void display(){
			cout<<"The title is "<<title<<", it has "<<volume<<" volumes, it was published in "<<year<<"."<<endl;
		}	//輸出 
		void input(){
			string t;
			int v,y;
			cout<<"Please input the title : ";
			cin>>t;
			while(1){
				cout<<"Please input the volume : ";
				cin>>v;
				if(!cin||v<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			while(1){
				cout<<"Please input the published year : ";
				cin>>y;
				if(!cin||y<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			title=t,volume=v,year=y;
		}	 //輸入 
};

class Book: public Publication{
	public:
		string author;
		int ISBN,price;
		Book(){
			author=" ",ISBN=0,price=0;
		}	//constructor 
		void diaplayb(){
			display();
			cout<<"The author is "<<author<<", the ISBN is "<<ISBN<<", the price is "<<price<<"."<<endl;
		}	//輸出 
		void inputb(){
			input();
			int i,p;
			string a;
			cout<<"Please input the author : ";
			cin>>a;
			while(1){
				cout<<"Please input the ISBN : ";
				cin>>i;
				if(!cin||i<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			while(1){
				cout<<"Please input the price : ";
				cin>>p;
				if(!cin||p<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			author=a,ISBN=i,price=p;
		}	//輸入 
};

class Journal: public Publication{
	public:
		int ISSN,annualSubscription;
		string month,impactFactor;
		Journal(){
			month=" ",ISSN=0,annualSubscription=0,impactFactor=" ";
		}	//constructor 
		void displayj(){
			display();
			cout<<"The published month is "<<month<<", the ISSN is "<<ISSN<<", the annual subscriptions are "<<annualSubscription<<", the impact factor is "<<impactFactor<<endl;
		}	//輸出 
		void inputj(){
			input();
			int i,a;
			string m,im;
			cout<<"Please input the published month : ";
			cin>>m;
			while(1){
				cout<<"Please input the ISSN : ";
				cin>>i;
				if(!cin||i<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			while(1){
				cout<<"Please input the annual subscriptions : ";
				cin>>a;
				if(!cin||a<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			cout<<"Please input the impact factor : ";
			cin>>im;
			month=m,ISSN=i,annualSubscription=a,impactFactor=im;
		}	//輸入 
};

class Magazine: public Publication{
	public:
		int annualSubscript;
		string month,editor;
		Magazine(){
			annualSubscript=0,month=" ",editor=" ";
		}	//constructor 
		void displaym(){
			display();
			cout<<"The published month is "<<month<<", the editor is "<<editor<<", the annual subscriptions are "<<annualSubscript<<endl;
		}	//輸出 
		void inputm(){
			input();
			int a;
			string m,e;
			cout<<"Please input the published month : ";
			cin>>m;
			cout<<"Please input the editor : ";
			cin>>e;
			while(1){
				cout<<"Please input the annual subscriptions : ";
				cin>>a;
				if(!cin||a<=0){
					cin.clear();
					cin.ignore();
					cout<<"Please input again. You can only input positive integer."<<endl;
					continue;
				}
				break;
			}
			annualSubscript=a,month=m,editor=e;
		}	//輸入 
};

int main(){
	int ch;
	cout<<"what do you want to input data?"<<endl;
	cout<<"Book, please input 1, Journal, please input 2, Maganize, please input 3."<<endl;
	while(1){
		cout<<"Your answer : ";
		cin>>ch;
		if(!cin||(ch!=1&&ch!=2&&ch!=3)){
			cout<<"Please input again. You can only input 1,2, or 3."<<endl;
			cin.clear();
			cin.ignore();
			continue;
		}
		break;
	}	//防止輸入1.2.3以外的輸入 
	if(ch==1){
		Book b;
		b.inputb();
		b.diaplayb();
	}
	else if(ch==2){
		Journal j;
		j.inputj();
		j.displayj();
	}
	else{
		Magazine m;
		m.inputm();
		m.displaym();
	}
	return 0;
}
