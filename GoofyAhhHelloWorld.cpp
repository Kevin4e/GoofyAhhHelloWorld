#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::string word = "Hello World!";
    std::string word_AUX = "";

    unsigned char c_AUX;

    bool isFound;

    for (char c : word) {
        isFound = false;
        c_AUX = 32;

        do {
            std::cout << word_AUX << ++c_AUX << ' ' << '\n';
            std::chrono::nanoseconds len(550);
            std::this_thread::sleep_for(len);

            if (c_AUX == c) {
                isFound = true;
                word_AUX += c_AUX;
            }
            else if (c == ' ') {
                isFound = true;
                word_AUX += ' ';
            }
        } while (c_AUX != c && !isFound);
    }
}