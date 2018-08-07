#include <iostream>
#include <stack>

int main(){

    long n; std::cin >> n; 
    std::stack<long> st;
    long lastRemoved(0), count(0);
    for(long p = 0; p < 2 * n; p++){
        std::string action; std::cin >> action;
        if(action[0] == 'a'){long x; std::cin >> x; st.push(x);}
        else{
            if(!st.empty()){
                if(st.top() == lastRemoved + 1){st.pop();}
                else{++count; while(!st.empty()){st.pop();}}
            }
            ++lastRemoved;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
