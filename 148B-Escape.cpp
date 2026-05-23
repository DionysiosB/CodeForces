#include<cstdio>

int main(){

    double vp, vd, t, f, c, distance; 
    long bijous(0);

    scanf("%lf %lf %lf %lf %lf", &vp, &vd, &t, &f, &c);
    bijous=0;

    if(vp < vd){
        distance = vd * vp * t / (vd-vp);
        while(distance<c){
            distance = vd * (distance + vp * (f + distance / vd)) / (vd-vp);
            ++bijous;
        }
    }

    printf("%ld\n", bijous);
}
