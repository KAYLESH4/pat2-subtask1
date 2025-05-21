#include <iostream>
#include <string>

using namespace std;

const char englishLetters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                               'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                               'U', 'V', 'W', 'X', 'Y', 'Z'};

const string morseCode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                            "..-", "...-", ".--", "-..-", "-.--", "--.."};

const char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const string morseNumbers[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

void translateToMorse(string text) {
    for (char &letter : text) {
        letter = toupper(letter);  

        bool found = false;
        for (int i = 0; i < 26; i++) {
            if (letter == englishLetters[i]) {
                cout << morseCode[i] << " ";
                found = true;
                break;
            }
        }

        if (!found) {
            for (int i = 0; i < 10; i++) {
                if (letter == numbers[i]) {
                    cout << morseNumbers[i] << " ";
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    string userMessage;
    cout << "Enter a message: ";
    getline(cin, userMessage);

    cout << "Morse Code Translation: ";
    translateToMorse(userMessage);

    return 0;
}
