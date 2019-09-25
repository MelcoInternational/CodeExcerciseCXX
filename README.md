**Melco Coding Exercise**

**Problem:**

The use case here is to develop a library which provides basic auto-correct
functionality. The problem is split into three functional aspects:

1. Given a function which calculates the 'distance' between two given words.
The implementation we wish to use is Levenshtein distance, although it is
encouraged to compartmentalize the distance algorithm so it can be swapped
out for another one at a later date without much trouble.
2. Given a list of known good words, determine whether a new given word is
misspelled.
3. Given a list of known good words, and a misspelled word, give a list of
possible replacements.

The basic use case is to support the user typing, and as they type it underlines
misspelled words. The user can then can bring up and select a list of possible
replacements. The UI portion is out of scope; except that it will leverage the
library created here.


**Expectations:**

The focus here is on readable, maintainable code. Efficiency is important but
it's also important to balance code complexity, and programmer time against the
maximally efficient implementation. We aren't looking for any particular
implementation, but we will want to know the rationale and pros and cons of the
given implementation. The use of stl containers/algorithms is encouraged; don't 
feel the need to rewrite basic data structures. 

You aren't expected to do any of this without external reference; part of the
purpose of this test is to see how an applicant does research and pulls together
a solution. Obviously though, you are also expected to not just copy paste an
answer together.

There are 'TODO:' comments marking out the most obvious portions to fill in, but
ultimately we are looking at the unit test output as our measure of 'done'. 

We expect this to take roughly 3-4 hours; and don't expect perfection. 

**Technical details:**

Use any IDE or platform you are comfortable with. Provided is a CMakeLists file
you are encouraged to use.

You should be provided a link to the git repo as your initial starting point; and
it is encouraged to use source control as you typically would on an actual project. 
If you have / use a publicly available git repo, on completion of the exercise 
we'd ask that you provide a link to your final pushed product. If you don't have
a current git repo service of choice; and don't want the end results to be public,
bitbucket.org offers free private repos you can share access to. 

You are also encouraged to use this as a general code sample as part of a code
profile, and to make it publicly available if you so desire. Ultimately the code
you write for the exercise is yours to use however you want. 