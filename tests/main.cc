#define CATCH_CONFIG_MAIN
#include "SpellCheck.h"
#include <chrono>
#include "Catch/Catch.h"

// TODO: These unit tests are a good starting point, feel free to add others as you go but these are expected to pass
TEST_CASE( "Distance Test", "[spellcheck]" ) {
	REQUIRE( SpellCheck::Distance("abcde", "zzzabcde") == 3);
	REQUIRE( SpellCheck::Distance("abcdefg", "zzzabcdefg") == 3);
	REQUIRE( SpellCheck::Distance("george", "forget") == 3);
	REQUIRE( SpellCheck::Distance("abcdefg", "abczzzz") == 4);
	REQUIRE( SpellCheck::Distance("zzzabcdefg", "abcdefg") == 3);
	REQUIRE( SpellCheck::Distance("profesior", "profession") == 2);
	REQUIRE( SpellCheck::Distance("Lorem ipsum dolor sit amet", "Lorem ipsum dolor sit amet") == 0 );
	REQUIRE( SpellCheck::Distance("dog", "dgo") == 2 );
	REQUIRE( SpellCheck::Distance("Dog", "dog") == 1 );
}

TEST_CASE( "IsKnownWord Test", "[spellcheck]" ) {
	REQUIRE(  SpellCheck::IsKnownWord("dog") );
	REQUIRE(  SpellCheck::IsKnownWord("Dog") );
	REQUIRE( !SpellCheck::IsKnownWord("dgo") );
	REQUIRE( !SpellCheck::IsKnownWord("george") ); // Make sure that proper nouns are corrected too!
	REQUIRE(  SpellCheck::IsKnownWord("George") );
}

TEST_CASE( "Replacements Test", "[spellcheck]" ) {
	REQUIRE(  SpellCheck::Replacements("dogg", 1) == std::vector<std::string>({"dog"}) );
	REQUIRE(  SpellCheck::Replacements("profesior", 3) == std::vector<std::string>({ "professor", "profession" }) );
	REQUIRE(  SpellCheck::Replacements("george", 2) == std::vector<std::string>({ "George" }));
}


TEST_CASE( "Speed check", "[spellcheck]") {
	using namespace std::chrono;

	auto now = std::chrono::high_resolution_clock::now();
	for(auto i = 0;i < 5000;i++) {
		REQUIRE(  SpellCheck::Replacements("zzzzzzzzzzzz", 5) == std::vector<std::string>({}) );
	}
	duration<double> timespan = duration_cast<duration<double>>(std::chrono::high_resolution_clock::now() - now);

	std::cerr << "Elapsed seconds " << timespan.count() << std::endl;
}
