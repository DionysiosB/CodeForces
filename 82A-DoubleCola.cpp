#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    const int numFriends = names.size();
    long n = 0, power = 1;
    scanf("%ld\n",&n);
    while(n > power * numFriends){n -= power * numFriends; power *= 2;}
    cout << names[ (n-1) / power] << endl; 
    return 0;
}
