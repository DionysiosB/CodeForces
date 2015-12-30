#include<bits/stdc++.h>

using namespace std;

int main(){
    char aloo[100100];
    cin>>aloo;

    bool flag = false;
    int i=0, n=strlen(aloo), num = aloo[n-1] - '0', last_loc = -1;
    for(i=0;i<=n-1;i++){
        int x = aloo[i] - '0';
        
        if(x % 2 == 0){
            if(x > num){
                last_loc = i;
            } else {
                aloo[i] = aloo[n-1];
                aloo[n-1] = x + '0';
                flag = true;
                break;
            }
        }

    }

    if(flag)
        cout<<aloo;
    else {
        if(last_loc == -1)
            cout<<-1;
        else {
            int x = aloo[last_loc] - '0';
            aloo[last_loc] = aloo[n-1];
            aloo[n-1] = x + '0';
            cout<<aloo;
        }
    }
}