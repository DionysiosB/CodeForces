#include <cstdio>
using namespace std;

int main(){
    int numProblems = 0, total = 0, a = 0, b = 0, c = 0;
    scanf("%d\n",&numProblems);
    while(--numProblems >= 0){scanf("%d %d %d\n", &a, &b, &c); if(a + b + c > 1){++total;}}
    printf("%d\n",total);
    return 0;
}
