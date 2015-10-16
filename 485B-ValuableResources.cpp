#include <cstdio>

int main(){

    long long n; scanf("%lld", &n);

    long long minX, maxX, minY, maxY;
    minX = minY =  1000000001;
    maxX = maxY = -1000000001;

    while(n--){
        long long x, y; scanf("%lld %lld", &x, &y);
        if(x < minX){minX = x;}
        if(x > maxX){maxX = x;}
        if(y < minY){minY = y;}
        if(y > maxY){maxY = y;}
    }

    long long lengthX = maxX - minX; 
    long long lengthY = maxY - minY;
    long long area = (lengthX > lengthY) ? (lengthX * lengthX) : (lengthY * lengthY);

    printf("%lld\n", area);

    return 0;
}
