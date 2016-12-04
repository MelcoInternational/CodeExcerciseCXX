#include <fstream>
#include "Dictionary.h"

Dictionary::Dictionary(std::string fileName) {
	std::ifstream fs(fileName);
	std::vector<std::string>* wordList = new std::vector<std::string>();

	std::string word;
	while(std::getline(fs, word)) {
		wordList->push_back(word);
	}

	AddKnownWords(*wordList);
}

void Dictionary::AddKnownWords(std::vector<std::string> words) {
	// TODO: Fill in logic
}

bool Dictionary::IsKnownWord(std::string word) const {
	// TODO: Fill in logic
	return false;
}

Dictionary &Dictionary::Instance() {
	static Dictionary dict("words.txt");
	return dict;
}

std::vector<std::string> Dictionary::KnownWords() {
	return {};
}
