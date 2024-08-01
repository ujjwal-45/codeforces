#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::vector<std::string> convertAndSplitToUppercaseWords(const std::string &input)
{
    std::vector<std::string> words;
    std::string currentWord;

    for (char c : input)
    {
        if (std::isalpha(c))
        {
            currentWord += std::toupper(c);
        }
        else if (!currentWord.empty())
        {
            words.push_back(currentWord);
            currentWord.clear();
        }
    }

    if (!currentWord.empty())
    {
        words.push_back(currentWord);
    }

    return words;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::vector<std::string> result = convertAndSplitToUppercaseWords(input);

    // for (const std::string &word : result)
    // {
    //     std::cout << word << std::endl;
    // }
    std::cout << result << std::endl;

    std::cout << std::endl;

    return 0;
}
