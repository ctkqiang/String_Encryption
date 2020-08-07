//  String Encryption
//
//  Created by John Melody Me on 06/08/2020.
//  Copyright © 2020 John Melody Me. All rights reserved.
//

#include <iostream>
#include <string>

std::string encrypt(std::string input, std::string key) {
    std::string tmp(key);
    while (key.size() < input.size()){
       key += tmp;
    }
    
    for (std::string::size_type i = 0; i < input.size(); ++i){
        input[i] ^= key[i];
    }
    return input;
}

std::string decrypt(std::string encrypted, std::string key) {
    return encrypt(encrypted, key);
}

int main(int argc, const char * argv[]) {
    std::string user_input;
    std::cout << "PLease Enter String You Wantd To Encrypt: \n";
    std::cin >> user_input;
    std::string message = encrypt(user_input, "THISISMYKEY");
    std::cout << "Encrypted: " << message;
    std::cout << "\nDecrypted: " << decrypt(message, "THISISMYKEY");
    std::cout << "ENCRYPTION \n";
    return 0;
}
