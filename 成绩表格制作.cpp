#include<iostream>
using namespace std;
int main(){
	double biao[4][6];
	for(int i=0;i<3;i++){
		cout<<"请输入第"<<i+1<<"位同学的三科成绩：";
		biao[i][3]=0;
		for(int j=0;j<3;j++){
			cin>>biao[i][j];
			biao[i][3]+=biao[i][j];
		}
		biao[i][4]=biao[i][3]/3;
		biao[i][5]=1;
	}
	for(int i=0;i<5;i++){
		biao[3][i]=0;
		for(int j=0;j<3;j++)
			biao[3][i]+=biao[j][i];
		biao[3][i]/=3;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			if(biao[i][3]<biao[j][3])
				biao[i][5]+=1;
	}
	cout<<'\t'<<"语文"<<'\t'<<"数学"<<'\t'<<"英语"<<'\t'<<"总分"<<'\t'<<"平均分"<<'\t'<<"排名"<<endl;
	for(int i=0;i<3;i++){
		cout<<"同学"<<i+1<<'\t';
		for(int j=0;j<6;j++)
			cout<<biao[i][j]<<'\t';
		cout<<endl;
	}
	cout<<"平均分"<<'\t';
	for(int i=0;i<5;i++)
		cout<<biao[3][i]<<'\t';
	cout<<'\n';
	return 0;
}
