#pragma once

namespace Shell {

class Shell
{
    public:
        Shell();
        Shell(Shell const &) = delete;
        Shell const &operator=(Shell const &) = delete;
        ~Shell() = default;

        void run();
    private:
        std::string _prompt;
};

}
