#include <string>
#include <vector>

/*
 * Note: Please don't change these interfaces.
 */
namespace SpellCheck {
	size_t Distance(const std::string &testWord, const std::string &refWord);
	bool IsKnownWord(const std::string& word);
	std::vector<std::string> Replacements(const std::string& word, size_t maxDistance = 3);
}