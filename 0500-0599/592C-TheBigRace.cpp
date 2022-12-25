#include <cstdio>

long long gcd (long long a, long long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long long t, w, b; scanf("%lld %lld %lld\n", &t, &w, &b);
    long long min = (w < b) ? w : b;
    long long lcm = (w / gcd(w, b)) * b;
    if(((t / w) + 1 <= b / gcd(b, w)) || lcm < 0){lcm = t + 1;}  //Overflow Protection
    long long add = ((t % lcm) < (min - 1)) ? (t % lcm) : (min - 1);
    long long num = (t / lcm) * min + add;
    long long den = gcd(num, t);
    printf("%lld/%lld\n", (num / den), (t / den));
}
