#include <iostream>
#include <string>
#include <vector>

int main() {
    int lines;
    std::cin >> lines;

    std::vector<std::string> strings;
    std::string input;

    for(int i = 0; i < lines; i++) {
        std::cin >> input;
        strings.push_back(input);
    }

    for(auto& s : strings) {
        const auto len = s.length();
        if(len > 10) {
            std::cout << s[0] << (len - 2) << s[len-1] << std::endl;
        }
        else std::cout << s << std::endl;
    }

    return 0;
}
