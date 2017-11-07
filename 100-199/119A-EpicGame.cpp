#include <cstdio>
using namespace std;

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){
    int a, b, n; scanf("%d %d %d\n", &a , &b , &n);
    while(1){
        n -= gcd(a,n);
        if(n <= 0){printf("0\n");break;}
        n -= gcd(b,n);
        if(n <= 0){printf("1\n");break;}
    }
    return 0;
}
