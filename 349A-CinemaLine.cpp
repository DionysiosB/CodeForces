#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);
    long bills[3] = {0}; //Not necessary to keep track of hundred bills;
    bool possible(1);

    for(int k = 0; k < n; k++){
        int temp(0); scanf("%d", &temp);
        if(temp == 25){++bills[0];}
        else if(temp == 50){--bills[0]; ++bills[1];}
        else if(temp == 100){
            ++bills[2];
            if(bills[1] > 0){--bills[1]; --bills[0];}
            else{bills[0] -= 3;}
        }
        if(bills[0] < 0){possible = 0; break;}
    }

    if(possible){puts("YES");}
    else{puts("NO");}

    return 0;
}
