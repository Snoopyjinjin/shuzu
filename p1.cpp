#include<iostream>
#include<fstream>
using namespace std;

int main()
{
int sum=0,i=0,progone[100];//定义数组和为0,存放数组
ifstream open("F:\\表格1.txt");
if(!open)
{
    cout<<"文件打开错误！/n";
}
while(open>>progone[i],i<100)
{
    sum+=progone[i];
    i++;
}
cout<<"数组求和为："<<sum<<endl;
open.close( );
return 0;
}
