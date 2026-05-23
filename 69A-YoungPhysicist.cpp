#include <cstdio>

int main(){
    int force[3] = {0}; int temp = 0;
    int numVectors; scanf("%d", &numVectors);
    for(int k = 0; k < 3*numVectors; k++){scanf("%d", &temp); force[k%3] += temp;}
    (force[0] || force[1] || force[2]) ? printf("NO") : printf("YES");
    return 0;
}
