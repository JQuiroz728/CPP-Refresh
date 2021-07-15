#include <iostream>
#include <string>
#include <cctype>

// Section 10 - Characters and Strings
// Challenge - Substitution Cipher

int main() {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string key =      "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";

    std::cout << "Enter your secret message: ";

    std::string userMessage;
    std::getline(std::cin, userMessage);
    

    // Encryption
    std::string encryptedMessage;
    for (char c : userMessage) {
        if (isalpha(c)) {
            size_t position = alphabet.find(c);
            encryptedMessage += key.at(position);
        } else {
            encryptedMessage += c;
        }
    }

    std::cout << "\nEncrypting message..." << std::endl;
    std::cout << "----> " << encryptedMessage << std::endl;


    // Decryption
    std::string decryptedMessage;
    for (char c : encryptedMessage) {
        if (isalpha(c)) {
            size_t position = key.find(c);
            decryptedMessage += alphabet.at(position);
        } else {
            decryptedMessage += c;
        }
    }

    std::cout << "\nDecrypting message..." << std::endl;
    std::cout << "----> " << decryptedMessage << std::endl;


    std::cout << std::endl;
    return 0;
}