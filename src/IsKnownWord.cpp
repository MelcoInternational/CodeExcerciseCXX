#include "SpellCheck.h"
#include "Dictionary.h"
#include <fstream>

namespace SpellCheck {
	bool IsKnownWord(const std::string& word) {
		return Dictionary::Instance().IsKnownWord(word);
	}
}
