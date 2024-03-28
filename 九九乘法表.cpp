#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j;
	cout<<setw(3)<<'*'<<'|';
	for(i=1;i<=9;i++)
		cout<<'\t'<<i;
	cout<<'\n';
	cout<<setfill('-')<<setw(4)<<'+';
	cout<<setw(8*9+4)<<'-'<<endl;
	for(i=1;i<=9;i++){
		cout<<setfill(' ')<<setw(3)<<i<<'|';
		for(j=1;j<=i;j++){
			cout<<'\t'<<i<<'*'<<j<<'='<<i*j;
		}
		cout<<endl;
	}
	return 0;

}
