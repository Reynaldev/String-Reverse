#include<iostream>
#include<string>

std::string reverse_string(std::string text)
{
    std::string letter = "";

    for (int i = text.size() - 1; i >= 0; i--)
    {
        letter += text[i];
    }

    return letter;
}

int main()
{
    std::string input;

    std::cout << "Insert a text: ";
    std::getline(std::cin, input);
    
    std::cout << reverse_string(input);
    
    return 0;
}
