#include<iostream>
using namespace std;

int main()
{
	int sh=0,sm=0,eh=0,em=0;//sh�}�l�p�� sm�}�l���� eh�����p�� em�������� 
	cin>>sh>>sm;
	cin>>eh>>em;
	int t=(eh*60+em)-(sh*60+sm);
	if(t<=120&&t>=0) cout<<t/30*30<<endl;
	else if(t>120&&t<=240) cout<<(t-120)/30*40+120<<endl;
	else cout<<(t-240)/30*60+120+160<<endl;
	
	system("pause");
	return 0;
} 
