#include <string>
#include <iostream>

int Find (const std::string& Word, char letter) {
   for (int i=0; i<Word.length(); i++) {
      if (Word[i] == letter) {
         return i;
      }
   }
   return -1;
}

int Find(const std::string& Word, const std::string& substr) {
   if (substr.empty()) return 0;
   if (substr.size() > Word.size()) return -1;

   for (int i = 0; i <= (Word.size() - substr.size()); ++i) {
      bool match = true;
      for (int j = 0; j < (substr.size()); ++j) {
         if (Word[i + j] != substr[j]) {
            match = false;
            break;
         }
      }
      if (match) return i; // found a match
   }
   return -1;
}