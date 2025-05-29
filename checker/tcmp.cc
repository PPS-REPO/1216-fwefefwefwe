#include "testlib.h"
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    string expected_str = ans.readToken();
    string actual_str = ouf.readToken();

    long long expected = stoll(expected_str);
    long long actual = stoll(actual_str);

    if (!ouf.seekEof()) {
        quitf(_wa, "Participant output has extra content.");
    }

    if (expected != actual) {
        quitf(_wa, "Wrong answer: expected %lld, found %lld", expected, actual);
    }

    quitf(_ok, "Correct answer: %lld", expected);
}
