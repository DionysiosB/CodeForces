#include <cstdio>
#include <algorithm>

int main(){

    long v[3] = {0};
    scanf("%ld %ld %ld", &v[0], &v[1], &v[2]);
    std::sort(v, v + 3);
    if(v[2] - v[0] >= 10){puts("check again");}
    else{printf("final %ld\n", v[1]);}

    return 0;
}
