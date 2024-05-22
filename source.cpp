#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 3 || (std::string(argv[1]) != "-s" && std::string(argv[1]) != "--search")) {
        std::cerr << "Usage: " << argv[0] << " -s <search_string>\n";
        return 1;
    }

    std::string search_string = argv[2];
    std::string input;
    std::getline(std::cin, input);

    size_t found = input.find(search_string);
    if (found != std::string::npos) {
        std::cout << found << '\n';
        return 0;
    } else {
        return 1;
    }
}