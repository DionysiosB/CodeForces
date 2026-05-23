#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<double> prob(n);
    for(int p = 0; p < n; p++){scanf("%lf", &prob[p]);}
    sort(prob.begin(), prob.end(), std::greater<double>());

    double output(0), product(1);
    for(int p = 0; p < n; p++){
        double candidate = output * (1 - prob[p]) + product * prob[p]; 
        if(output < candidate){output = candidate; product *= (1 - prob[p]);}
    }

    printf("%.11lf\n", output);

    return 0;
}
