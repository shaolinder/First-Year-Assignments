#include <iostream>
using namespace std;
int main (){
	
	int num;
	int temp=0;
	cin>>num;
	while (num!=0){
		if (num%2==0)
			temp=temp+num;
		else
			temp=temp-num;
		cin>>num;
	}
cout<<"temp="<<temp<<endl;
	
	return 0;
	


}
