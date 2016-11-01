#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);

    if(n == 0){puts("zero");}
    else if(n == 10){puts("ten");}
    else if(n == 11){puts("eleven");}
    else if(n == 12){puts("twelve");}
    else if(n == 13){puts("thirteen");}
    else if(n == 14){puts("fourteen");}
    else if(n == 15){puts("fifteen");}
    else if(n == 16){puts("sixteen");}
    else if(n == 17){puts("seventeen");}
    else if(n == 18){puts("eighteen");}
    else if(n == 19){puts("nineteen");}
    else{

        int t = n / 10;
        int d = n % 10;

        if(t > 1){
            if(t == 2){printf("twenty");}
            if(t == 3){printf("thirty");}
            if(t == 4){printf("forty");}
            if(t == 5){printf("fifty");}
            if(t == 6){printf("sixty");}
            if(t == 7){printf("seventy");}
            if(t == 8){printf("eighty");}
            if(t == 9){printf("ninety");}
        }

        if(t > 1 && d > 0){printf("-");}

        if(d > 0){
            if(d == 1){printf("one");}
            if(d == 2){printf("two");}
            if(d == 3){printf("three");}
            if(d == 4){printf("four");}
            if(d == 5){printf("five");}
            if(d == 6){printf("six");}
            if(d == 7){printf("seven");}
            if(d == 8){printf("eight");}
            if(d == 9){printf("nine");}
        }
        
        puts("");
    }

    return 0;
}
