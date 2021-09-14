#include <iostream>
#include <Windows.h>
#include <thread>

void Menu()
{
    std::cout << " " << std::endl;
    std::cout << "  1 = Github.com" << std::endl;
    std::cout << "  2 = Google.com" << std::endl;
    std::cout << "  3 = Netflix.com" << std::endl;
    std::cout << "  4 = Youtube.com" << std::endl;
    std::cout << "  Option : ";


    char response;
    std::cin >> response;
    if (response == '1')
    {
        ShellExecute(0, 0, L"https://github.com", 0, 0, SW_SHOW);
    }
    else if (response == '2')
    {
        ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW);
    }
    else if (response == '3')
    {
        ShellExecute(0, 0, L"https://netflix.com", 0, 0, SW_SHOW);
    }
    else if (response == '4')
    {
        ShellExecute(0, 0, L"https://youtube.com", 0, 0, SW_SHOW);
    }
}

int main()
{
    Menu();
}
