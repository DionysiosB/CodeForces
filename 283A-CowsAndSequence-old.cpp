#include <cstdio>
#include <vector>

int main(){

    long sequence[200001] = {0};
    long count(1);
    double total(0);
    long n(0); scanf("%ld", &n);
    long x(0), a(0), temp(0);
    int operation(0);

    while(n--){

        scanf("%d", &operation);

        if(operation == 1){
            scanf("%ld %ld", &a, &x);
            for(int k = 0; k < a; k++){sequence[k] += x;}
            total += x * a;
        }
        else if(operation == 2){
            scanf("%ld", &temp);
            sequence[count++] = temp; 
            total += temp;
        }
        else if(operation == 3){total -= sequence[--count];}

        printf("%.9lf\n", total/count);

    }

    return 0;
}
