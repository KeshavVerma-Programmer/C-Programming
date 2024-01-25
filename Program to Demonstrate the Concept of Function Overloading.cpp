#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"Sum = "<<(a+b);
}
void add(double a,double b)
{
    cout<<"Sum = "<<(a+b);
}
int main(){
add(10,2);
add(5.5,5.5);
return 0;
}
