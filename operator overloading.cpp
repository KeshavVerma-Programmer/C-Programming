#include<iostream>
using namespace std;
class testclass{
private:
    int count;
public:
    testclass():count(5){}
    void operator(){
     count=cout-3;
    }
    void display(){
    cout<<"count:"<<count;}
};
int main(){
  testclass tc;
  --tc;
  tc.display();
  return 0;
}
