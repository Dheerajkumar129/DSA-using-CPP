//1. Reverse a String
#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}


//2. Check if a String is a Palindrome
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "madam";
    cout << "String: " << str << endl;

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


//3. Count Vowels and Consonants in a String
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void countVowelsAndConsonants(const string &str, int &vowels, int &consonants) {
    vowels = 0;
    consonants = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    string str = "Hello, World!";
    int vowels, consonants;

    countVowelsAndConsonants(str, vowels, consonants);

    cout << "String: " << str << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}


//4. Find the Length of a String Without Using strlen
#include <iostream>
#include <string>
using namespace std;

int getStringLength(const string &str) {
    int length = 0;
    for (char ch : str) {
        length++;
    }
    return length;
}

int main() {
    string str = "Hello, World!";
    int length = getStringLength(str);

    cout << "String: " << str << endl;
    cout << "Length: " << length << endl;

    return 0;
}


//5. Convert String to Uppercase
#include <iostream>
#include <string>
using namespace std;

void toUpperCase(string &str) {
    for (char &ch : str) {
        ch = toupper(ch);
    }
}

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    toUpperCase(str);

    cout << "Uppercase string: " << str << endl;

    return 0;
}


//6. Concatenate Two Strings
#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string result = concatenateStrings(str1, str2);

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "Concatenated string: " << result << endl;

    return 0;
}


//7. Find the Frequency of Characters in a String
#include <iostream>
#include <string>
#include <map>
using namespace std;

void findFrequency(const string &str) {
    map<char, int> freq;

    for (char ch : str) {
        if (isalpha(ch)) {
            freq[ch]++;
        }
    }

    for (auto pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string str = "Hello, World!";
    cout << "String: " << str << endl;
    cout << "Character frequencies:" << endl;

    findFrequency(str);

    return 0;
}


//8. Remove All Spaces from a String
#include <iostream>
#include <string>
using namespace std;

void removeSpaces(string &str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
}

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    removeSpaces(str);

    cout << "String after removing spaces: " << str << endl;

    return 0;
}
