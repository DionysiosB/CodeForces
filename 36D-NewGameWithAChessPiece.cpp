#include <iostream>
#include <fstream>
#include <sstream>

bool firstWins(long n, long m, long k){

    long min = (m < n) ? m : n;
    if(min % (k + 1) == 0){return true;}
    else if(k == 1 || (min / (k + 1)) % 2 == 0){return (m % 2) != (n % 2);}
    else{return (m % 2) == (n % 2);}
}

int main(){

    std::ifstream instream; instream.open("input.txt");
    FILE * outputFile = fopen("output.txt","w");
    long t, k; instream >> t >> k;
    while(t--){
        long n, m; instream >> n >> m;
        fputs(firstWins(n, m, k) ? "+\n" : "-\n", outputFile);
    }

    instream.close();
    fclose(outputFile);

    return 0;
}
