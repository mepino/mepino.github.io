#include <iostream>
#include <string>

class Amazon
{
private:
    int dex;

public:
    Amazon(int dex_input)
    {
        dex = dex_input;
    };

    void getDex()
    {
        std::cout << dex;
    }
};

int main()
{
    Amazon charactor1(30);
    charactor1.getDex();
    return 0;
}