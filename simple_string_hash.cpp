#include <iostream>


unsigned int simple_string_hash(std::string& str)
{
    const char* char_str = str.c_str();
    unsigned int hash = 0;
    unsigned int i = 0;

    while (char_str[i] != 0)
    {
        hash += static_cast<int>(char_str[i]);
        ++i;
    }

    return hash;
}

int main(int argc, char const *argv[])
{
    const std::string quest = "Введите строку: ";
    const std::string response = "Наивный хеш строки ";
    std::string str = "";
    unsigned int hash = 0;

    while (true)
    {
        std::cout << quest;
        std::getline(std::cin, str);

        hash = simple_string_hash(str);

        std::cout << response << str << " = ";
        std::cout << hash << '\n';
    }

    return 0;
}
