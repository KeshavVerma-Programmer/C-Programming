#include<iostream>
using namespace std;
int avg(int a,int b,int c,int d,int e)
{
    int j=(a+b+c+d+e)/5;
    return j;
}
int main(){
  cout<<"average is"<<avg(5,10,36.7,9,20);
  return 0;
}
