#include <cstdio>

int main(){

    long n(0), x(0); scanf("%ld %ld", &n, &x);

    long temp(0), left(0), equal(0), right(0);
    for(int k = 0; k < n; k++){
        scanf("%ld", &temp);
        if(temp < x){++left;}
        else if(temp == x){++equal;}
        else if(temp > x){++right;}
    }

    long output(0);
    if(equal == 0){output = 1; equal = 1;}

    if(left + equal < right){
        output += right - left - equal; 
        if((n + output)%2 == 1){--output;}
    }
    else if(left + 1 > right + equal - 1){
        output += left + 2 - right - equal; 
        if((n + output)%2 == 0){--output;}
    }

    printf("%ld\n", output);

    return 0;
}
