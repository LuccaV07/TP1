#include "domains.h"

// Métodos de City()
void City::validate(string name) {
    int check = 0;
    for (int i = 0; CITIES[i] != "\0"; i++) {
        if (name == CITIES[i]) {
            check = 1;
        }
    }

    if (check == 0) {
        throw invalid_argument("Argumento Inválido.");
    }
}

void City::setName(string name) {
    validate(name);
    this->name = name;
}

// Métodos de Code()
void Code::validate(string value) {
    if (value.length() != LENGTH) {
        throw invalid_argument("Argumento Inválido");
    }

    int sum = 0;
    int num;
    int givenValidationChar = value[LENGTH-1]-48;
    for (int i = 0; i < LENGTH-1; i++) {
        if (value[i] < '0' || value[i] > '9') {
            throw invalid_argument("Argumento Inválido.");
        }
        num = value[i]-48;
        if (i%2 == 1) {
            num = num * 2;
            if (num > 9) {
                num-=9;
            }
        }
        sum+=num;
    }

    int calculatedValidationChar = 10 - (sum%10);
    if (calculatedValidationChar == 10) {
        calculatedValidationChar = 0;
    }
    if (calculatedValidationChar != givenValidationChar) {
        throw invalid_argument("Argumento com número de validação inválido");
    }
}

void Code::setValue(string value) {
    validate(value);
    this->value = value;
}

//Métodos de Date()
void Date::validate(string date) {
    int ten = date[0] - 48;
    int unity = date[1] - 48;
    int day = (ten * 10) + unity;
    if (day < LOWER || day > UPPER) {
        throw invalid_argument("Argumento Inválido.");
    }

    string month = "";
    for (int i = 3; i < date.length(); i++){
        month+=date[i];
    }

    int check = 0;
    for (int i = 0; MONTH[i] != "\0"; i++) {
        if (month == MONTH[i]) {
            check = 1;
        }
    }

    if (check == 0) {
        throw invalid_argument("Argumento Inválido.");
    }
}

void Date::setDate(string date) {
    validate(date);
    this->date = date;
}

// Métodos de Description()
//
// O método validate() também acusa exceção em caso de qualquer repetição de caractere que não seja
// alfanumérico  e de espaço em branco ANTES de caractere que não seja alfanumérico, mas não acusa em
// caso de espaço em branco APÓS caractere que não seja alfanumérico (exceto outro espaço em branco).
void Description::validate(string text) {
    if (text.length() > LENGTH) {
        throw invalid_argument("Argumento Inválido.");
    }

    for (int i = 0; i < text.length(); i++){
        if ((text[i] < 'a' || text[i] > 'z') && (text[i] < '0' || text[i] > '9') && (text[i] < 'A' || text[i] > 'Z')) {
            if (text[i] == '  ') {
                if ((text[i+1] < 'a' || text[i+1] > 'z') && (text[i+1] < '0' || text[i+1] > '9') && (text[i] < 'A' || text[i] > 'Z')) {
                    throw invalid_argument("Argumento Inválido.");
                }
            }
            else {
                if (((text[i] < 'a' || text[i] > 'z') && (text[i] < '0' || text[i] > '9') && (text[i] < 'A' || text[i] > 'Z'))
                && text[i+1] != ' ') {
                    throw invalid_argument("Argumento Inválido.");
                }
            }
        }
    }
}

void Description::setText(string text) {
    validate(text);
    this-> text = text;
}

// Métodos de Email()
void Email::validate(string address) {
    if (address[0] == '.') {
        throw invalid_argument("Argumento Inválido.");
    }
    int atPosition;
    int checkAtSign = 0;
    for (int i = 0; i < LOCAL_LENGTH+1; i++) {
        if (address[i] == '@') {
            checkAtSign = 1;
            atPosition = i;
            break;
        }
    }

    if (checkAtSign == 0) {
        throw invalid_argument("Argumento Inválido.");
    }

    // Parte Local
    for (int i = 0; address[i] != '@'; i++) {
        if ((address[i] < 'a' || address[i] > 'z') && (address[i] < 'A' || address[i] > 'Z')
        && (address[i] < '0' || address[i] > '9')) {
            if (address[i] == '.' || address[i] == '-' || address[i] == '_'){
                if ((address[i+1] < 'a' || address[i+1] > 'z') && (address[i+1] < 'A' || address[i+1] > 'Z')
                && (address[i+1] < '0' || address[i+1] > '9')) {
                    throw invalid_argument("Argumento Inválido.");
                }
            }
            else {
                throw invalid_argument("Argumento Inválido.");
            }
        }
    }

    // Domínio
    if (address[atPosition+1] == '.' || address[atPosition+1] == '-') {
        throw invalid_argument("Argumento Inválido.");
    }

    int counter = 0;
    for (int i = atPosition; i <= address.length() - atPosition; i++) {
        if ((address[i] < 'a' || address[i] > 'z') && (address[i] < 'A' || address[i] > 'Z')
        && (address[i] < '0' || address[i] > '9')) {
            if (address[i] == '.') {
                if ((address[i+1] < 'a' || address[i+1] > 'z') && (address[i+1] < 'A' || address[i+1] > 'Z')
                && (address[i+1] < '0' || address[i+1] > '9')) {
                    throw invalid_argument("Argumento Inválido.");
                }
                counter = 0;
            }
            else if (address[i] == '-') {
                if ((address[i+1] < 'a' || address[i+1] > 'z') && (address[i+1] < 'A' || address[i+1] > 'Z')
                && (address[i+1] < '0' || address[i+1] > '9')) {
                    throw invalid_argument("Argumento Inválido.");
                }
            }
            else {
                throw invalid_argument("Argumento Inválido.");
            }
        }
        counter+=1;
        if (counter > 63) {
            throw invalid_argument("Argumento Inválido.");
        }
    }
}

void Email::setAddress(string address) {
    validate(address);
    this-> address = address;
}

// Métodos de Language()
void Language::validate(string name) {
    int check = 0;
    for (int i = 0; LANGUAGES[i] != "\0"; i++) {
        if (name == LANGUAGES[i]) {
            check = 1;
        }
    }

    if (check == 0){
        throw invalid_argument("Argumento Inválido.");
    }
}

void Language::setName(string name) {
    validate(name);
    this->name = name;
}

// Métodos de  Name()
void Name::validate(string name) {
    if (name.length() > LENGTH) {
        throw invalid_argument("Argumento Inválido.");
    }

    if (name[0] < 'A' || name[0] > 'Z') {
        throw invalid_argument("Argumento Inválido.");
    }

    int check = 0;
    for (int i = 1; i < name.length(); i++) {
        if ((name[i] < 'a' || name[i] > 'z') && (name[i] < '0' || name[i] > '9')) {
            if (name[i] == ' ') {
                if (name[i+1] < 'A' || name[i+1] > 'Z') {
                    throw invalid_argument("Argumento Inválido.");
                }
                else {
                    i++;
                    check = 1;
                }
            }
            else {
                throw invalid_argument("Argumento Inválido.");
            }
        }
    }

    if (check == 0) {
        throw invalid_argument("Argumento Inválido.");
    }
}

void Name::setName(string name) {
    validate(name);
    this-> name = name;
}

// Métodos de Grade()
void Grade::validate(int value) {
    if (value < LOWER || value > UPPER) {
        throw invalid_argument("Argumento Inválido.");
    }
}

void Grade::setValue(int value) {
    validate(value);
    this->value = value;
}

// Métodos de Country()
void Country::validate(string name) {
    int check = 0;
    for (int i = 0; COUNTRIES[i] != "\0"; i++) {
        if (name == COUNTRIES[i]) {
            check = 1;
        }
    }

    if (check == 0) {
        throw invalid_argument("Argumento Inválido.");
    }
}

void Country::setName(string name) {
    validate(name);
    this->name = name;
}

// Métodos de Password()
void Password::validate(string keyword) {
    if (keyword.length() > LENGTH) {
        throw invalid_argument("Argumento Inválido.");
    }

    int checkUpperCase = 0;
    int checkLowerCase = 0;
    int checkDigit = 0;
    int checkSpecialChar = 0;
    for (int i = 0; i < keyword.length(); i++) {
        if (keyword[i] >= 'a' && keyword[i] < 'z') {
            checkLowerCase = 1;
        }
        else if (keyword[i] >= 'A' && keyword[i] <='Z') {
            checkUpperCase = 1;
        }
        else if (keyword[i] >= '0' && keyword[i] <= '9') {
            checkDigit = 1;
        }
        else{
            for (int j = 0; SPECIAL_CHARS[j] != '\0'; j++) {
                if (keyword[i] == SPECIAL_CHARS[j]) {
                    checkSpecialChar = 1;
                }
            }
            if (checkSpecialChar == 0) {
                throw invalid_argument("Argumento Inválido");
            }
        }
    }

    if (checkDigit == 0 || checkLowerCase == 0 || checkSpecialChar == 0 || checkUpperCase == 0) {
        throw invalid_argument("Argumento Inválido");
    }
}

void Password::setKeyword(string keyword) {
    validate(keyword);
    this->keyword = keyword;
}
