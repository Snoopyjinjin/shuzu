#include <iostream>
#include <fstream>
using namespace std;

int ArraySum(int* array, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int length;
    int x;
    cout<<"输入数据长度"<<endl;
    cin>>length;
    ifstream in("G:\\p1.txt");
    int* a = new int[length];
    for(int i = 0; i < length; i++)
    {
        in >> x;
       a[i] = x;
    }
    int result = ArraySum(a, length);
    cout << "结果是" << result <<endl;
    in.close();
    delete a;
    return 0;
}
