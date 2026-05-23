#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int64_t n, m, k, dec; scanf("%lld %lld %lld %lld", &n, &m, &k, &dec);
    std::vector<int64_t> rowVec(n, 0);
    std::vector<int64_t> colVec(m, 0);

    for(int64_t row = 0; row < n; row++){
        for(int64_t col = 0; col < m; col++){
            int64_t x; scanf("%lld", &x);
            rowVec[row] += x; colVec[col] += x;
        }
    }

    std::multiset<int64_t> rowSet;
    for(int64_t p = 0; p < n; p++){rowSet.insert(rowVec[p]);}
    std::multiset<int64_t> colSet;
    for(int64_t p = 0; p < m; p++){colSet.insert(colVec[p]);}

    int64_t rowCount(0), colCount(0), pleasure(0);
    for(int64_t p = 0; p < k; p++){
        int64_t rowCand = *(--rowSet.end()) - dec * colCount;
        int64_t colCand = *(--colSet.end()) - dec * rowCount;

        if(rowCand > colCand || (rowCand == colCand && n < m)){
            pleasure += rowCand;
            ++rowCount;
            int64_t elem = *(--rowSet.end());
            rowSet.erase(elem);
            elem -= n * dec;
            rowSet.insert(elem);
        }
        else{
            pleasure += colCand;
            ++colCount;
            int64_t elem = *(--colSet.end());
            colSet.erase(elem);
            elem -= m * dec;
            colSet.insert(elem);
        }

        printf("Iteration:%lld   Pleasure:%lld\n", p, pleasure);
        printf("Rows: ");
        for(std::multiset<int64_t>::iterator it = rowSet.begin(); it != rowSet.end(); it++){printf("%lld ", *it);}
        printf("\nCols: ");
        for(std::multiset<int64_t>::iterator it = colSet.begin(); it != colSet.end(); it++){printf("%lld ", *it);}
        puts("");



        printf("RowCount:%lld ColCount:%lld\n", rowCount, colCount);

    }

    printf("%lld\n", pleasure);

    return 0;
}
