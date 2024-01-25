#include<iostream>
using namespace std;
class Discrete{
float x[30],f[20];
public:
    int n;
    float sum,sf,am;
    void mean(){
     cout<<"Please enter the number of Terms :";
     cin>>n;
     cout<<"Please enter the "<<n<<" elements of X series:";
     for(int i=0;i<n;i++){
        cin>>x[i];
     }
     cout<<"Please enter the "<<n<<" elements of Y series:";
     for(int i=0;i<n;i++){
     cin>>f[i];
     sum+=f[i]*x[i];
     sf+=f[i];
    }
    am=sum/sf;
    cout<<"Arithmetic mean :"<<am;
   }
};
int main(){
 Discrete ob;
 ob.sum=0;
 ob.sf=0;
 ob.mean();
 return 0;
}
