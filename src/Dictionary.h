#pragma once
#include <string>
#include <vector>

/** TODO: This data structure was partially filled in, but never completed. Finish it, and if you see any issues in
 *  what is currently there, don't hesitate to fix them. */
struct Dictionary {
	Dictionary(std::string fileName);

	void AddKnownWords(std::vector<std::string> words);
	bool IsKnownWord(std::string word) const;
	std::vector<std::string> KnownWords();

	static Dictionary& Instance();
};
