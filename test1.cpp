#include<iostream>
using namespace std;
int main(){
	double biao[4][6];
	for(int i=0;i<3;i++){
		cout<<"�������"<<i+1<<"λͬѧ�����Ƴɼ���";
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
	cout<<'\t'<<"����"<<'\t'<<"��ѧ"<<'\t'<<"Ӣ��"<<'\t'<<"�ܷ�"<<'\t'<<"ƽ����"<<'\t'<<"����"<<endl;
	for(int i=0;i<3;i++){
		cout<<"ͬѧ"<<i+1<<'\t';
		for(int j=0;j<6;j++)
			cout<<biao[i][j]<<'\t';
		cout<<endl;
	}
	cout<<"ƽ����"<<'\t';
	for(int i=0;i<5;i++)
		cout<<biao[3][i]<<'\t';
	cout<<'\n';
	return 0;
}