#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int numClients; scanf("%d\n", &numClients);
    int concurrent = 1, needed = 1;
    int hour = -1, min = -1, a, b;
    while(numClients--){
        scanf("%d %d", &a, &b);
        if(a == hour && b == min){concurrent++; needed = max(needed, concurrent);}
        else{hour = a; min = b; concurrent = 1;}
    }
    printf("%d\n",needed);
    return 0;
}
