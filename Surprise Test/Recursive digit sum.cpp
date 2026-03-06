#include <bits/stdc++.h>
using namespace std;

int superDigit(string n, int k) {
    if (n.length() == 1) return stoi(n);
    
    long long sum = 0;
    for (char c : n) sum += (c - '0');
    sum *= k;
    
    return superDigit(to_string(sum), 1);
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    cout << superDigit(n, k) << endl;
    return 0;
}
