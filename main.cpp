#include <iostream>
#include <vector>
#include <memory>

using namespace std;

struct M {
    M(const unsigned t, const unsigned x) : t(t), x(x) {}

    const unsigned t;
    const unsigned x;
//private:
//    M(const M& m): t(0), x(0) {}
};


int main() {
    auto b = make_unique<int[]>(2);
    cout << b[0] << b[1] << b[2] << endl;
    cout << "Hello World!" << endl;
}