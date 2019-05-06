#include <iostream>
#include "Shell/Shell.hpp"

namespace Shell {

Shell::Shell()
    : _prompt("$> ")
{}

void Shell::run() {
    std::string buffer;

    while (buffer.compare("exit"))
    {
        std::cout << _prompt;
        std::cin >> buffer;
    }
}

}
