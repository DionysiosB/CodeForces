#include <cstdio>
#include <vector>

int main(){

    long n(0); scanf("%ld", &n);
    std::vector<long> times(n,0);

    long total(0);
    for(int k = 0; k < n; k++){scanf("%ld", &times[k]); total += times[k];}
    long aliceNumber(0), bobNumber(0), aliceTime(0), bobTime(0);


    for(int p = 0; p < n; p++){
        if(2 * (aliceTime + times[p]) <= total){aliceTime += times[p]; ++aliceNumber;}
        else{break;}
    }
    for(int p = n - 1; p >= 0; p--){
        if(2 * (bobTime + times[p]) <= total){bobTime += times[p]; ++bobNumber;}
        else{break;}
    }
    if(aliceNumber + bobNumber < n){(aliceTime <= bobTime) ? (++aliceNumber) : (++bobNumber);}

    printf("%ld %ld\n", aliceNumber , bobNumber);

    return 0;
}
