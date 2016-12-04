#define CATCH_CONFIG_MAIN
#include "SpellCheck.h"

#include "Catch/Catch.h"

// TODO: These unit tests are a good starting point, feel free to add others as you go but these are expected to pass
TEST_CASE( "Distance Test", "[spellcheck]" ) {
	REQUIRE( SpellCheck::Distance("Lorem ipsum dolor sit amet", "Lorem ipsum dolor sit amet") == 0 );
	REQUIRE( SpellCheck::Distance("dog", "dgo") == 1 );
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
	REQUIRE(  SpellCheck::Replacements("dgo") == std::vector<std::string>({"dog"}) );
}
