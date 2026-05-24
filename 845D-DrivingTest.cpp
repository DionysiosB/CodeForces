#include<cstdio>
#include<stack>

int main(){

    std::stack<long> s;
    long n; scanf("%ld", &n);

    long speed(0), cnt(0), noOvertake(0), speedLimit(0);
    while(n--){
        int t; scanf("%d", &t);
        if(t == 1){scanf("%ld", &speed);}
        else if(t == 2){cnt += noOvertake; noOvertake = 0;}
        else if(t == 3){scanf("%ld", &speedLimit); s.push(speedLimit);}
        else if(t == 4){noOvertake = 0;}
        else if(t == 5){while(!s.empty()) s.pop();}
        else if(t == 6){++noOvertake;}

        while(!s.empty() && s.top() < speed){s.pop(); ++cnt;}
    }

    printf("%ld\n", cnt);

    return 0;
}
