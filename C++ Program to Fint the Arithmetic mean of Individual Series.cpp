#include<iostream>
using namespace std;
class Mean{
public:
    int i,n;
    float arr[30],armean,sum=0;
    Output()
    {
        cout<<"Enter number of Mean:";
        cin>>n;
        cout<<"Enter "<<n<<" numbers"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        armean=sum/n;
        cout<<"Arithmetic Mean ="<<armean<<endl;
    }
};
int main(){
 Mean obj;
 obj.Output();
 return 0;
}
