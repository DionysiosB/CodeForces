#include <cstdio>

int main(){

    long long left(0), right(0), index(0);
    scanf("%lld %lld %lld", &left, &right, &index);

    int count = 1;
    while(count++ < index){
        long long temp = left + right;
        left = right;
        right = temp;
    }

    printf("%lld\n", right);

    return 0;
}
