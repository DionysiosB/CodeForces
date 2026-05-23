#include <cstdio>
#include <vector>

int main(){

    int n; double p; int t;
    scanf("%d %lf %d\n", &n, &p, &t);

    std::vector<std::vector<double> > prob(t + 1, std::vector<double>(n + 1, 0));

    double probNone(1);
    for(int time = 0; time <= t; time++){prob[time][0] = probNone; probNone *= (1 - p);}

    for(int time = 1; time <= t; time++){
        for(int num = 1; num <= n && num <= t; num++){
            prob[time][num] = p * prob[time - 1][num - 1] + (num == n ? 1 : (1 - p)) * prob[time - 1][num];
        }
    }

    double ans(0);
    for(int k = 0; k <= n; k++){ans += prob[t][k] * k;}
    printf("%.8lf\n", ans);

    return 0;
}
