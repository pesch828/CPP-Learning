#include <iostream>
#include <limits>

class Test
{
    private:
        /* data */
        void say_name();
    public:
        Test(/* args */);
        ~Test();
    };

    // Constructor
    Test::Test(/* args */)
    {
    }

    // Deconstructor
    Test::~Test()
    {
}

void Test::say_name() {
    std::cout << "I'm the test class";
}

int main() {
    std::cout << "Hello, world!\n";

    return 0;
}
