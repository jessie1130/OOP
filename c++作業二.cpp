#include <iostream>
#include <iomanip>

using namespace std;

struct grade{
	char name[20];
	int score;
};	//�ŧi�ۭq��ƫ��A�]�t�W�r�M���� 

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
}	//�N�ǥͪ����Z�ѧC���Ʀܰ��� 
void average(grade *p,int count){
	float total=0.0,averagescore;
	for(int i=0;i<count;i++){
		total=total+p[i].score;
	}
	averagescore=total/(float)count;
	cout<<"The averade score is "<<averagescore<<endl;
}	//�p�⥭�����Z 

int main(){
	grade temp;	//�Ȧs�ǥͦW�r�M���Z 
	static int count=0;	//�p��s��ĴX�Ӿǥ� 
	struct grade *p=new grade[100];	//�ŧi�i�s100�Ӿǥͦ��Z���O���� 
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
