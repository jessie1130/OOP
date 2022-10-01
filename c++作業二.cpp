#include <iostream>
#include <iomanip>

using namespace std;

struct grade{
	char name[20];
	int score;
};	//宣告自訂資料型態包含名字和分數 

void sort(grade *p,int count){
	grade temp;
	for(int i=count-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(p[j].score>p[j+1].score){
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	for(int i=0;i<count;i++){
		cout<<setw(10)<<p[i].name<<" "<<p[i].score<<endl;
	}
}	//將學生的成績由低分排至高分 
void average(grade *p,int count){
	float total=0.0,averagescore;
	for(int i=0;i<count;i++){
		total=total+p[i].score;
	}
	averagescore=total/(float)count;
	cout<<"The averade score is "<<averagescore<<endl;
}	//計算平均成績 

int main(){
	grade temp;	//暫存學生名字和成績 
	static int count=0;	//計算存到第幾個學生 
	struct grade *p=new grade[100];	//宣告可存100個學生成績的記憶體 
	cout<<"Please input the name and score,the score should be positive. ";
	while(cin>>temp.name>>temp.score){
		if(temp.score<0){
			cout<<"Please input the name and score again,the score should be positive. ";
			continue;
		}
		else if(temp.score>=0){
			p[count]=temp; 
			count++;
		}
		cout<<"Please input the name and score,the score should be positive."<<endl<<"If it ends, please input ctrl+z. ";
	}
	sort(p,count);
	average(p,count);
	delete []p;
}
