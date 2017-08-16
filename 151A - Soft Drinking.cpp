#include <bits/stdc++.h>

int main() {

    int f,l,sl,b, nml, ml, g,s, min, min1, min2,min3;
    std::cin >> f >>  b >>  ml >> l >> sl >> s >> nml >> g;
    ml=b*ml;
    sl=l*sl;
    min1=ml/nml;
    min2=s/g;
    min=std::min({min1,min2,sl});

    std::cout << (min/f);
    return 0;
}
