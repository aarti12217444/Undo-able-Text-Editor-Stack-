#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<string> history;
    string cmd;
    string current = "";
    while (cin >> cmd) {
        if (cmd == "add") {
            string w; cin >> w;
            history.push(current);
            if (!current.empty()) current += " ";
            current += w;
        } else if (cmd == "undo") {
            if (!history.empty()) {
                current = history.top();
                history.pop();
            }
        } else if (cmd == "print") {
            cout << current << "\n";
        } else if (cmd == "exit") break;
    }
    return 0;
}
