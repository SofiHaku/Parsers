#include "./hpp/Grammar.hpp"
#include "./hpp/Parser.hpp"
#include <iostream>

int main () {
  Grammar grammar;
  size_t count_rules;
  std::string str;
  std::cin >> count_rules;
  for (size_t i = 0; i < count_rules; i++) {
    std::cin >> str;
    grammar.SetRule(str);
  }
  grammar.PrintRules();
  std::string word = "aaabbaaa";
  ParserCYK parser;
  if (parser.Check_word(word, grammar)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}