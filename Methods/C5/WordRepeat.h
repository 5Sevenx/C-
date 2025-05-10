#ifndef WORDREPEAT_H
#define WORDREPEAT_H
#include <map>
#include <sstream>

inline int WordInit() {
    string text = "hello world hello";
    map<string, int> wordCount;
    istringstream iss(text);
    string word;

    while (iss >> word) {
        ++wordCount[word];
    }

    for (const auto& [word, count] : wordCount) {
        cout << word << ": " << count << '\n';
    }

    return 0;
}

#endif
