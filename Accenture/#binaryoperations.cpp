#include <bits/stdc++.h>
using namespace std;

int OperationsBinaryString(char* str) {
    if (str == nullptr) {
        return -1;
    }

    int result = str[0] - '0';

    for (int i = 1; str[i] != '\0'; i += 2) {
        char operation = str[i];
        int next = str[i + 1] - '0';

        if (operation == 'A') {
            // AND
            result = result & next;
        }
        else if (operation == 'B') {
            // OR
            result = result | next;
        }
        else if (operation == 'C') {
            // XOR
            result = result ^ next;
        }
    }

    return result;
}

int main() {
    char str[] = "1C0C1C1A0B1";

    cout << OperationsBinaryString(str) << endl;

    return 0;
}