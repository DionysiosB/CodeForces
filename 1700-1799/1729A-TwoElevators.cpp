#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long first(a - 1); first = (first >= 0) ? first : -first;
        long secondA(b - c), secondB(c - 1); 
        secondA = (secondA >= 0) ? secondA : -secondA;
        secondB = (secondB >= 0) ? secondB : -secondB;
        long second = secondA + secondB;

        if(first < second){puts("1");}
        else if(second < first){puts("2");}
        else{puts("3");}
    }


}
