#include <iostream>
#include <vector>
#include <string>

int main()
{
    
    std::vector<std::string> words = {"bella", "label", "roller"};

    // A vector to store the frequency vectors for each word
    std::vector<std::vector<int>> freq;

    // Iterate through each word in the list
    for (const auto &word : words)
    {
        // Create a frequency vector of size 26, initialized to 0
        std::vector<int> wordFreq(26, 0);

        // Iterate through each character in the word
        for (char c : word)
        {
            // Increment the frequency of the character
            wordFreq[c - 'a']++;
        }

        // Add the frequency vector to the main freq vector
        freq.push_back(wordFreq);
    }

    // Optional: Print the frequency vectors for verification
    for (int i = 0; i < freq.size(); ++i)
    {
        std::cout << "Frequency of characters in word \"" << words[i] << "\":\n";
        for (int j = 0; j < 26; ++j)
        {
            if (freq[i][j] > 0)
            {
                std::cout << (char)('a' + j) << ": " << freq[i][j] << "\n";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
