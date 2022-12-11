#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

struct client{
    long long order;
    long long memory;
};

bool compareClients(client A, client B){return A.memory < B.memory;}

int main(){

    long long n, d; std::cin >> n >> d;
    long long a, b; std::cin >> a >> b;

    client dummyClient; dummyClient.order = 0; dummyClient.memory = 0;
    std::vector<client> requestVec(n, dummyClient);

    for(long long p = 0; p < n; p++){
        long long first, second; std::cin >> first >> second; 
        requestVec[p].order = p; requestVec[p].memory = a * first + b * second;
    }

    std::sort(requestVec.begin(), requestVec.end(), compareClients);

    long long usedMemory(0);
    std::vector<client> served;
    for(long long p = 0; p < requestVec.size(); p++){
        usedMemory += requestVec[p].memory;
        if(usedMemory <= d){served.push_back(requestVec[p]);}
        else{break;}
    }

    std::cout << served.size() << std::endl;
    for(long long p = 0; p < served.size(); p++){std::cout << 1 + served[p].order << " ";}; puts("");

    return 0;
}
