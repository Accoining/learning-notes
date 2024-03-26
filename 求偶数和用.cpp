#include<iostream>
using namespace std;
int main(){
	int a,b,temp,num[200],i,n;
	double sum,avg;
	cout<<"请输入范围a和b：";
	cin>>a>>b;
	cout<<"请输入数字个数：";
	cin>>n;
	if(a>b){
		temp=a;
		a=b;
		b=temp;}
	sum=0;
	cout<<"请输入"<<n<<"个"<<a<<"与"<<b<<"之间的偶数:"<<endl;
	for(i=0;i<n;){
		cin>>num[i];
		if(num[i]>=a&&num[i]<=b&&num[i]%2==0)
		{
			sum+=num[i];
			i++;}
	}
	avg=sum/n;
	cout<<"平均值为："<<avg<<endl;
	cout<<"你所输入的"<<n<<"个有效值为："<<endl;
	for(i=i-1;i>=0;i--)
		cout<<num[i]<<'\t';
	cout<<endl;
	return 0;
}
