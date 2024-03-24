#include <iostream>
#include <string>
using namespace std;

bool checkSubsequence(const string& s, string& selected, int index) {
    if (index == s.length()) {
        return (selected == "DFS" || selected == "dfs");
    }

    // 不选择当前字符
    if (checkSubsequence(s, selected, index + 1)) {
        return true;
    }

    // 选择当前字符
    selected.push_back(s[index]);
    if (checkSubsequence(s, selected, index + 1)) {
        return true;
    }
    selected.pop_back(); // 回溯

    return false;
}

int main() {
    string testString;
    cout << "Enter the test string: ";
    cin >> testString;

    string selected;
    bool result = checkSubsequence(testString, selected, 0);

    if (result) {
        cout << "Selected characters form 'DFS' or 'dfs'" << endl;
    }
    else {
        cout << "Selected characters do not form 'DFS' or 'dfs'" << endl;
    }

    return 0;
}
