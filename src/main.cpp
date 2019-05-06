#include <iostream>
#include "hello.hpp"
#include "Shell/Shell.hpp"

int main()
{
    hello();
    Shell::Shell shell;

    shell.run();
    return (0);
}
