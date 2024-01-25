#include<iostream>
using namespace std;
class discrette
{
    float x[30],f[20];
public:
    int n;
    float sum,sf,am;
    void mean()
    {
        cout<<"please enter the number of terms:";
        cin>>n;
        cout<<"please enter the "<<n<<"element of x series :";
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        cout<<"please enter the "<<n<<"element of y series :";
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
            sum+=f[i]*x[i];
            sf+=f[i];
        }
        am=sum/sf;
        cout<<"arithmetic mean :"<<am;
    }
};
int main(){
  discrette ob;
  ob.sum=0;
  ob.sf=0;
  ob.mean();
  return 0;


}
