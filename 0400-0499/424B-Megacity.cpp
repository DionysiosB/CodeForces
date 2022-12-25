#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

struct city{
    double r;
    long people;
};

bool compC(city A, city B){
    if(A.r < B.r){return 1;}
    else if(A.r == B.r){return A.people < B.people;}
    return 0;
}

int main(){

    const long target = 1e6; 
    long n(0), current(0); scanf("%ld %ld", &n, &current);

    long diff = target - current;

    std::vector<city> popVec;
    for(int k = 0; k < n; k++){
        long x, y, pop; scanf("%ld %ld %ld", &x, &y, &pop);
        city addC; addC.r = x * x + y * y; addC.people = pop; 
        popVec.push_back(addC);
    }

    std::sort(popVec.begin(), popVec.end(), compC);
    
    double output = 0.0;
    long index = 0;
    while(diff > 0){
        if(index >= n){break;}
        city current = popVec[index++];
        output = sqrt(current.r);
        diff -= current.people;
    }

    if(diff <= 0){printf("%.7lf\n", output);}
    else{puts("-1");}

    return 0;
}
