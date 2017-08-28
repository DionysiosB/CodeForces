#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int N = 4;
    std::vector<long> num(N); scanf("%ld %ld %ld %ld\n", &num[0], &num[1], &num[2], &num[3]);
    std::vector<char> op(N - 1); scanf("%c %c %c\n", &op[0], &op[1], &op[2]);
    long long output(1e13);
    sort(num.begin(), num.end());

    do{
        long long current;
        if(op[0] == '+'){current = num[0] + num[1];} else{current = num[0] * num[1];}
        if(op[1] == '+'){current += num[2];} else{current *= num[2];}
        if(op[2] == '+'){current += num[3];} else{current *= num[3];}
        if(current < output){output = current;}

        long long currentA, currentB;
        if(op[0] == '+'){currentA = num[0] + num[1];} else{currentA = num[0] * num[1];}
        if(op[1] == '+'){currentB = num[2] + num[3];} else{currentB = num[2] * num[3];}
        if(op[2] == '+'){current = currentA + currentB;} else{current = currentA * currentB;}
        if(current < output){output = current;}

        if(op[0] == '+'){current = num[2] + num[3];} else{current = num[2] * num[3];}
        if(op[1] == '+'){current += num[1];} else{current *= num[1];}
        if(op[2] == '+'){current += num[0];} else{current *= num[0];}
        if(current < output){output = current;}

    }while(std::next_permutation(num.begin(), num.end()));

    printf("%lld\n", output);

    return 0;
}
