#include<cstdio>

int main(){

    long zz, zn, nz, nn; scanf("%ld %ld %ld %ld", &zz, &zn, &nz, &nn);
    if(zz + nz + zn + nn == 0){puts("0"); return 0;}

    long zeros(0), ones(0), num0(0), num1(0);
    while(num0 + zeros <= zz){num0 += zeros; ++zeros;}
    while(num1 + ones <= nn){num1+=ones; ++ones;}
    if(nz == 0 && zn == 0 && zz == 0){zeros=0;}
    if(nn == 0 && nz == 0 && zn == 0){ones=0;}

    long length = ones + zeros;

    if(ones * zeros != nz+zn || num0 !=zz || num1 != nn){
        puts("Impossible");
        return 0;
    }

    while(length--){
        if(zn >= ones){printf("0"); zn -= ones; --zeros;}
        else{printf("1"); nz-=zeros; --ones;}
    }

    return 0;
}
