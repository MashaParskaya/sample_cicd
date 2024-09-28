#include <iostream>
#include <cstdlib>
#include <sum.h>

int main(int argc, char * argv[]) {

    if (argc != 3) {
        std::cerr << "incorrect numer of args\n";
        return 1;
    }

    int a = std::atof(argv[1]);
    int b = std::atof(argv[2]);

    std::cout << sum(a, b) << std::endl;

    return 0;
}
