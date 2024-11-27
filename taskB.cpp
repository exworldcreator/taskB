#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void instrumentFolding(int a, int b, const vector<int>& places) {
    vector<bool> marked(places.size(), false);
    int seconds = 0;

    while (true) {
        bool done = true;

        if (!marked[a - 1]) {
            marked[a - 1] = true;
            done = false;
        }

        if (!marked[b - 1]) {
            marked[b - 1] = true;
            done = false;
        }

        if (done) {
            break;
        }

        a = (a % places.size()) + 1;
        b = (b % places.size()) + 1;
        seconds++;
    }

    cout << seconds << endl;
}

int main() {
    vector<int> places = {1, 2, 3, 4, 5};
    int a = 3, b = 2;

    instrumentFolding(a, b, places);

    return 0;
}