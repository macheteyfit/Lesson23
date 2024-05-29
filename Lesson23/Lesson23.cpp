#include <iostream>

namespace foo {
    void func() {
        std::cout << "foo\n";
    }
}

namespace bar {
    void func() {
        std::cout << "bar\n";
    }
}

namespace factory {
    void func() {
        std::cout << "factory\n";
    }
}

using namespace factory;

namespace factory {
    int state = 16;
    void finc() {
        std::cout << "factory\n";
    }
}

namespace std {
    int x = 5;
}

namespace test {
    void show() {
        std::cout << "test";
    }
    int x = 10;
}



int main()
{
    foo::func();
    bar::func();
    func();
    std::cout << state << std::endl;
    std::cout << std::x;
    std::cout << std::endl;
    using test::show;
    show();
    using std::cout;
    std::cout << std::endl;
    cout << "Hi";


}


