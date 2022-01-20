#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> filter_palindromes(std::vector<std::string> vec){
    auto palindrome = std::vector<std::string>{};

    for (int i = 0; i < vec.size(); i++){
        std::string word = vec[i];

        for (int a = 0; a < word.size() / 2; a++){
            if (word[a] != word[word.size() - 1 - a]){
                break;
            }
            if (a == word.size() / 2 - 1){
                palindrome.push_back(word + " ");
            }
        }
    }
    return palindrome;
}

int main(){                              //przykladowe:
    auto words = std::vector<std::string>{"radar", "inni", "owoc", "owocowo", "sos"};
    std::vector<std::string> ret = filter_palindromes(words);
    std::cout << "Palindromy:\n";

    for (int i = 0; i < ret.size(); i++){
        std::cout << ret[i] << "\n";
    }
    return 0;
}
