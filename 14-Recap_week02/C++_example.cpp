#include <iostream>
#include <string>
#include <map>

class TextAnalyzer{
private:
    std::string text;

    int countVowels(){
        int count = 0;
        std::string vowels = "aeiouAEIOU";
        for(char c : text){
            if(vowels.find(c) != std::string::npos)
                count++;
        }
        return count;
    }

public:
    TextAnalyzer(std::string t){
        text = t;
    }

    int wordCount(){
        int words = 0;
        bool inWord = false;

        for(char c : text){
            if(c != ' ' && !inWord){
                words++;
                inWord = true;
            }
            if(c == ' ')
                inWord = false;
        }
        return words;
    }

    void charFrequency(){
        std::map<char, int> freq;
        for(char c : text){
            if(c != ' ')
                freq[c]++;
        }

        std::cout << "\nCharacter Frequency:\n";
        for(auto &p : freq){
            std::cout << p.first << " : " << p.second << std::endl;
        }
    }

    void analyze(){
        std::cout << "\nText Length: " << text.length() << std::endl;
        std::cout << "Word Count: " << wordCount() << std::endl;
        std::cout << "Vowel Count: " << countVowels() << std::endl;
        charFrequency();
    }
};
