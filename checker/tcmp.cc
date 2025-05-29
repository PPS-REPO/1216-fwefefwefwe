#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    int expected = ans.readInt();
    int actual = ouf.readInt();  
    if (!ouf.seekEof()) {
        quitf(_wa, "Participant output has extra content.");
    }

    if (expected != actual) {
        quitf(_wa, "Wrong answer: expected %d, found %d", expected, actual);
    }

    quitf(_ok, "Correct answer: %d", expected);
}