#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int numKids, seconds;scanf("%d %d\n",&numKids, &seconds); 
    string q; getline(cin, q);
    while(seconds--){
        int index = numKids - 1;
        while(index >= 0){
            index--;
            if(q[index] == 'B' && q[index + 1] == 'G'){q[index] = 'G'; q[index + 1] = 'B'; index--;}
        }
    }
    cout << q << endl;
    return 0;
}
