#include<iostream>
#include<fstream>
using namespace std;

void ArraySum(int n,int min,int max)

{int *a
int sum=0;
a=new int[n];
ifstream in("G:\\p1.txt");
if(!in)
{
    cout<<"不能打开文件";
}
for(int i=min-1;in>>a[i],i<=max-1;i++)
  sum+=a[i];
  cout<<sum<<endl;
  in.close();
}
int main()
{
int n,min,max;
cout<<"输入数组长度和求和范围：长度、起始数、终止数:";
         cin>>a>>max>>min;
         cout<<"所求和为：";
         ArraySum(n,min,max);
         return 0;
}
