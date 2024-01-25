#include<iostream>
using namespace std;
class Harmonic{
private:
    double x[30];
public:
        void mean(int n){
        int i;
        double sum=0,hm;
        cout<<"\n Please enter "<<n<<" elements in X series :"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }

            cout<<"Division of X series :"<<endl;
            for(i=0;i<n;i++)
        {
            cout<<"|"<<x[i]<<"|"<<endl;
            sum+=1/x[i];
        }
        cout<<"Summation of 1/X series :"<<sum<<endl;
        hm=n/sum;
        cout<<"Harmonic means of X series :"<<hm<<endl;
      }
};
int main(){
  Harmonic ob;
  int n;
  cout<<"Please enter no. of Terms: ";
  cin>>n;
  ob.mean(n);
  return 0;
}
