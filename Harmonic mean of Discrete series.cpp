#include<iostream>
using namespace std;
class Harmonic{
 double x[30],fre[30];
 public:
     int n;
     static double sum,sfre;
     double hm;
     void mean(){
      cout<<"Enter Number of  Terms :";
      cin>>n;
      cout<<"Enter "<<n<<"  Elements in X series"<<endl;
      for(int i=0;i<n;i++)
      {
          cin>>x[i];
      }
      cout<<"Enter Frequency :"<<endl;
      for(int i=0;i<n;i++)
      {
          cin>>fre[i];
          sum+=fre[i]/x[i];
          sfre+=fre[i];
      }
      hm = sfre/sum;
     }
};
double Harmonic::sum=0;
double Harmonic::sfre=0;
int main(){
  Harmonic  ob;
  ob.mean();
  cout<<"Summation of Frequency = "<<ob.sfre<<endl;
  cout<<"Summation of Fx = "<<ob.sum<<endl;
  cout<<"Harmonic mean = "<<ob.hm<<endl;
  return 0;
}
