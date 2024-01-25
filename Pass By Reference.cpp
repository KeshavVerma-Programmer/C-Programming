#include<iostream>
using namespace std;
int swap(int*x,int*y)
{
    int z;
    z =*x;
    *x  =*y;
    *y=z;
}
int main()
{
int x = 500, y = 100;
swap(&x,&y);
cout<<"Value of X is :"<<x<<endl;
cout<<"Value of Y is :"<<y<<endl;
return 0;
}
