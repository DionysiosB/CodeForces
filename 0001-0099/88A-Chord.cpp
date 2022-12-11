#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main(){

    const int M = 12;

    std::map<std::string, int> notes;
    notes["C"] = 0; notes["C#"] = 1;
    notes["D"] = 2; notes["D#"] = 3;
    notes["E"] = 4; 
    notes["F"] = 5; notes["F#"] = 6;
    notes["G"] = 7; notes["G#"] = 8;
    notes["A"] = 9; notes["B"] = 10; notes["H"] = 11;

    std::string x, y, z; std::cin >> x >> y >> z;
    std::vector<int> s; 
    s.push_back(notes[x]); s.push_back(notes[y]); s.push_back(notes[z]);
    sort(s.begin(), s.end()); 
    s.push_back(s[0] + M);

    if((s[1] - s[0] == 4 && s[2] - s[1] == 3) || (s[2] - s[1] == 4 && s[3] - s[2] == 3) || (s[3] - s[2] == 4 && s[1] - s[0] == 3)){puts("major");}
    else if((s[1] - s[0] == 3 && s[2] - s[1] == 4) || (s[2] - s[1] == 3 && s[3] - s[2] == 4) || (s[3] - s[2] == 3 && s[1] - s[0] == 4)){puts("minor");}
    else{puts("strange");}

    return 0;
}
