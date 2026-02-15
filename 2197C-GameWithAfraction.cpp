#include <cstdio>
typedef long long ll;

int main(){
    
    // Bob can only win if the fraction is in the form of
    // (2 * x + lambda) / (3 * x + lambda)
    //so that every time Alice makes a move, Bob makes the opposite move
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll num, den; scanf("%lld %lld", &num, &den);
        ll x(den - num), lambda(3 * num - 2 * den);
        bool win(x >= 1 && lambda >= 0);
        puts(win ? "Bob" : "Alice");
    }
}
