#include<iostream>
using namespace std;
int main(){
	int a,b,temp,num[200],i,n;
	double sum,avg;
	cout<<"�����뷶Χa��b��";
	cin>>a>>b;
	cout<<"���������ָ�����";
	cin>>n;
	if(a>b){
		temp=a;
		a=b;
		b=temp;}
	sum=0;
	cout<<"������"<<n<<"��"<<a<<"��"<<b<<"֮���ż��:"<<endl;
	for(i=0;i<n;){
		cin>>num[i];
		if(num[i]>=a&&num[i]<=b&&num[i]%2==0)
		{
			sum+=num[i];
			i++;}
	}
	avg=sum/n;
	cout<<"ƽ��ֵΪ��"<<avg<<endl;
	cout<<"���������"<<n<<"����ЧֵΪ��"<<endl;
	for(i=i-1;i>=0;i--)
		cout<<num[i]<<'\t';
	cout<<endl;
	return 0;
}
