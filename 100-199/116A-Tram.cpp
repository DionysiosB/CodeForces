#include <cstdio>
using namespace std;

int main(){
    int numStops; scanf("%d\n",&numStops);
    int curCapacity = 0, maxCapacity = 0, out = 0, in = 0;
    while(--numStops >= 0){
        scanf("%d %d\n",&out, &in);
        curCapacity += in - out;
        if(curCapacity > maxCapacity){maxCapacity = curCapacity;}
    }
    printf("%d\n",maxCapacity);
    return 0;
}
