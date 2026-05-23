#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long min1, max1; scanf("%ld %ld\n", &min1, &max1);
    long min2, max2; scanf("%ld %ld\n", &min2, &max2);
    long min3, max3; scanf("%ld %ld\n", &min3, &max3);

    long rem = n;
    long first = min1;  rem -= min1;
    long second = min2; rem -= min2;
    long third = min3; rem -= min3;

    long diff;
    diff = rem < (max1 - min1) ? rem : (max1 - min1);
    first += diff; rem -= diff;

    diff = rem < (max2 - min2) ? rem : (max2 - min2);
    second += diff; rem -= diff;

    diff = rem < (max3 - min3) ? rem : (max3 - min3);
    third += diff; rem -= diff;

    printf("%ld %ld %ld\n", first, second, third);

    return 0;
}
