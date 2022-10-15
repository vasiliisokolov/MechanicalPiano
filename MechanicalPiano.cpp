#include <iostream>
#include <string>

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

bool check_input(std::string);

int main()
{
    std::string melody[12];
    std::string result;
    std::cout << "Please, enter your melody: " << std::endl;
    for (int i = 0; i < 12; i++)
    {
        std::string temp;
        std::cin >> temp;
        if (check_input(temp))
        {
            melody[i] = temp;
        }
        else
        {
            std::cerr << "Wrong Note!" << std::endl;
            i--;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        std::string temp = melody[i];
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] & note::DO)
                std::cout << "DO ";
            else if (temp[j] & note::RE)
                std::cout << "RE ";
            else if (temp[j] & note::MI)
                std::cout << "MI ";
            else if (temp[j] & note::FA)
                std::cout << "FA ";
            else if (temp[j] & note::SOL)
                std::cout << "SOL ";
            else if (temp[j] & note::LA)
                std::cout << "LA ";
            else if (temp[j] & note::SI)
                std::cout << "SI ";
            
        }
        
    }
}

bool check_input(std::string input)
{
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] < '1' || input[i] > '7')
        {
            return false;
        }
        
    }
    return true;
}