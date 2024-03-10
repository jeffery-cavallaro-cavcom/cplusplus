#include <iostream>
#include <string>

class Message {
    public:
    Message(const std::string &message = std::string()) : _message(message) {}
    void show(void) {
        std::cout << _message << std::endl;
    }

    private:
    std::string _message;
};

int main(int argc, char *argv[]) {
    Message hello("Hello, World !!!");
    hello.show();
    return 0;
}
