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
    cout<<"���ܴ��ļ�";
}
for(int i=min-1;in>>a[i],i<=max-1;i++)
  sum+=a[i];
  cout<<sum<<endl;
  in.close();
}
int main()
{
int n,min,max;
cout<<"�������鳤�Ⱥ���ͷ�Χ�����ȡ���ʼ������ֹ��:";
         cin>>a>>max>>min;
         cout<<"�����Ϊ��";
         ArraySum(n,min,max);
         return 0;
}
