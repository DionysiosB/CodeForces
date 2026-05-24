#include <iostream>
#include <queue>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::queue<long> dq, rq;
    for(int p = 0; p < n; p++){
        if(s[p] == 'D'){dq.push(p);}
        else if(s[p] == 'R'){rq.push(p);}
    }

    while(!dq.empty() && !rq.empty()){
        if(dq.front() < rq.front()){
            rq.pop(); long cur = dq.front();
            dq.pop(); dq.push(cur + n);
        }
        else{
            dq.pop(); long cur = rq.front();
            rq.pop(); rq.push(cur + n);
        }
    }

    std::cout << (dq.empty() ? "R" : "D") << std::endl;

    return 0;
}
