#include<iostream>
using namespace std;
int main(void)
{
    double time[5],wa[5],score[5],poi[5];
    poi[0]=500;
    for(int i=1;i<5;++i)
        poi[i]=poi[i-1]+500;
    for(int i=0;i<5;++i)
        cin>>time[i];
    for(int i=0;i<5;++i)
        cin>>wa[i];
    for(int i=0;i<5;++i)
        score[i]=max(0.3*poi[i],(1.00-time[i]/250.0)*poi[i]-50*wa[i]);
    for(int i=1;i<5;++i)
        score[i]=score[i]+score[i-1];
        double temp1,temp2;
    cin>>temp1>>temp2;
    double lala=score[4]+temp1*100-50*temp2;
    int kaka=lala;
    cout<<kaka;

    return 0;
}