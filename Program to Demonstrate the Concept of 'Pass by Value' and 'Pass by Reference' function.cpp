#include<iostream>
using namespace std;
void change(int data)
{
    data = 5;
}
int main(){
 int data = 3;
 change(data);
 cout<<"Value is = "<<data<<endl;
 return 0;
}
