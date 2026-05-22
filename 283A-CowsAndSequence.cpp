#include <cstdio>
#include <vector>

int main(){

    const long L = 200001;
    std::vector<long> seq(L, 0);
    std::vector<long> diff(L, 0);
    double sum(0), length(1);
    long n; scanf("%ld", &n);

    while(n--){

        int op; scanf("%d", &op);

        if(op == 1){
            long a, x; scanf("%ld %ld\n", &a, &x);
            sum += a * x;
            diff[a] += x; 
        }
        else if(op == 2){
            long temp; scanf("%ld\n", &temp);
            seq[++length] = (temp);
            sum += temp;
        }
        else if(op == 3){
            diff[length - 1] += diff[length]; 
            sum -= seq[length] + diff[length];
            diff[length--] = 0;
        }

        printf("%.9lf\n", sum / length);

    }

    return 0;
}
