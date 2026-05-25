#include <cstdio>

int main(){

    int da, db; scanf("%d %d", &da, &db);
    if(da == 9 && db == 1){puts("9 10");}
    else if(da == db){printf("%d %d\n", 10 * da, 10 * da + 1);}
    else if(db == da + 1){printf("%d %d\n", 10 * da + 9, 10 * (da + 1));}
    else{puts("-1");}

    return 0;
}
