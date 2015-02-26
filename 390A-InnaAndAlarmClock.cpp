#include <cstdio>
#include <set>

int main(){

    long n(0); scanf("%ld", &n);
    std::set<long> rows, cols;
    while(n--){
        long currentRow(0), currentCol(0); 
        scanf("%ld %ld", &currentRow, &currentCol);
        rows.insert(currentRow); 
        cols.insert(currentCol);
    }

    printf("%ld\n", rows.size() < cols.size() ? rows.size() : cols.size()); 

    return 0;
}
