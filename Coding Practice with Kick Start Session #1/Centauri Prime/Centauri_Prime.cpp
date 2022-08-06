//Passed test set 1 and test set 2
#include <iostream>
#include <string>

using namespace std;
string kingdomCpy;
/*
    return:
    - Alice if last letter is a vowel
    - Bob   if last letter is a consonant (not y)
    - nobody if last letter is y
*/
string GetRuler(const string& kingdom);
bool isVowel(char lastLetter);
char isUpper(char c);
char toLower(char c);

int main() {
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t) {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
            << GetRuler(kingdom) << ".\n";
    }
    return 0;
}

bool isVowel(char lastLetter) {
    return lastLetter == 'a' || lastLetter == 'e' || lastLetter == 'i' || lastLetter == 'o' || lastLetter == 'u' ? true : false;
}
char isUpper(char c) {
    return c >= 'A' && c <= 'Z' ? 1 : 0;
}
char toLower(char c) {
    return isUpper(c) ? c - 'A' + 'a' : c;
}

string GetRuler(const string& kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom.
    char lastLetter = toLower(kingdom.back());
    string ruler = isVowel(lastLetter) ? "Alice" : lastLetter == 'y' ? "nobody" : "Bob";
    return ruler;
}
