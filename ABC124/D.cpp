
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int max_len = 1;
    int last = n - 1, num_zero = (s.back() == '0');
    for (int first = n - 2; 0 <= first; --first) {
        if (s[first] == '1'
            || (s[first] == '0' && s[first + 1] == '0')) {
            max_len = max(max_len, last - first + 1);
        }
        else {
            ++num_zero;
            while (k < num_zero) {
                while (s[last] == '1') --last;
                while (s[last] == '0') --last;
                --num_zero;
            }
            max_len = max(max_len, last - first + 1);
        }
    }

    cout << max_len << endl;

    return 0;
}