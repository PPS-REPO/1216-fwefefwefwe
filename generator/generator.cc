#include "testlib.h"

using namespace std;

int main(int argc, char** argv) {
    int al, ar, bl, br, a, b;
    
    registerGen(argc, argv, 1);

    al = atoi(argv[1]);
    ar = atoi(argv[2]);

    a = rnd.next(al, ar);

    printf("%d\n", a);
    return 0;
}
