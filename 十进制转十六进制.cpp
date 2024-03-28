#include<iostream>
using namespace std;
int main(){
    int i,num;
    char dig[200];
    cin>>num;
    for(i=0;num>0;i++){
        dig[i]=num%2;
        num=num/2;
    }
    for(i=i-1;i>=0;i--){
        if(dig[i]<10)
            cout<<char(dig[i]+'0');
        else
            cout<<char(dig[i]-10+'a');
    }
    return 0;
}
        
