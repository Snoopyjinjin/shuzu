#include<iostream>
#include<fstream>
using namespace std;

int main()
{
int sum=0,i=0,progone[100];//���������Ϊ0,�������
ifstream open("F:\\���1.txt");
if(!open)
{
    cout<<"�ļ��򿪴���/n";
}
while(open>>progone[i],i<100)
{
    sum+=progone[i];
    i++;
}
cout<<"�������Ϊ��"<<sum<<endl;
open.close( );
return 0;
}
