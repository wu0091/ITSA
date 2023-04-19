#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a1,a2,a3,m;
	cin>>n;
	cin>>a1>>a2>>a3;
	m=a1*15+a2*20+a3*30;
	if(n-m<0){
		cout<<"0"<<endl;
	}else{
		a1=(n-m)/50;
		a2=((n-m)%50)/5;
		a3=((n-m)%50)%5;
		
	}
	cout << a1 << "," << a2 << "," << a3 << endl;
	return 0; 
}
