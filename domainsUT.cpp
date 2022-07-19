#include "domainsUT.h"

// Métodos da classe CodeUT()
void CodeUT::setUp() {
    code = new Code();
    status = SUCCESS;
}

void CodeUT::tearDown() {
    delete code;
}

void CodeUT::testSuccess() {
    try {
        code->setValue(VALOR_VALIDO);
        if (code->getValue() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void CodeUT::testFailure() {
    try {
        code->setValue(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (code->getValue() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int CodeUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe CityUT()
void CityUT::setUp() {
    city = new City();
    status = SUCCESS;
}

void CityUT::tearDown() {
    delete city;
}

void CityUT::testSuccess() {
    try {
        city->setName(VALOR_VALIDO);
        if (city->getName() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void CityUT::testFailure() {
    try {
        city->setName(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (city->getName() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int CityUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe DateUT()
void DateUT::setUp() {
    date = new Date();
    status = SUCCESS;
}

void DateUT::tearDown() {
    delete date;
}

void DateUT::testSuccess() {
    try {
        date->setDate(VALOR_VALIDO);
        if (date->getDate() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void DateUT::testFailure() {
    try {
        date->setDate(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (date->getDate() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int DateUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe DescriptionUT()
void DescriptionUT::setUp() {
    description = new Description();
    status = SUCCESS;
}

void DescriptionUT::tearDown() {
    delete description;
}

void DescriptionUT::testSuccess() {
    try {
        description->setText(VALOR_VALIDO);
        if (description->getText() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void DescriptionUT::testFailure() {
    try {
        description->setText(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (description->getText() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int DescriptionUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe EmailUT()
void EmailUT::setUp() {
    email = new Email();
    status = SUCCESS;
}

void EmailUT::tearDown() {
    delete email;
}

void EmailUT::testSuccess() {
    try {
        email->setAddress(VALOR_VALIDO);
        if (email->getAddress() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void EmailUT::testFailure() {
    try {
        email->setAddress(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (email->getAddress() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int EmailUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe LanguageUT()
void LanguageUT::setUp() {
    language = new Language();
    status = SUCCESS;
}

void LanguageUT::tearDown() {
    delete language;
}

void LanguageUT::testSuccess() {
    try {
        language->setName(VALOR_VALIDO);
        if (language->getName() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void LanguageUT::testFailure() {
    try {
        language->setName(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (language->getName() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int LanguageUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe NameUT()
void NameUT::setUp() {
    name = new Name();
    status = SUCCESS;
}

void NameUT::tearDown() {
    delete name;
}

void NameUT::testSuccess() {
    try {
        name->setName(VALOR_VALIDO);
        if (name->getName() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void NameUT::testFailure() {
    try {
        name->setName(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (name->getName() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int NameUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe GradeUT()
void GradeUT::setUp() {
    grade = new Grade();
    status = SUCCESS;
}

void GradeUT::tearDown() {
    delete grade;
}

void GradeUT::testSuccess() {
    try {
        grade->setValue(VALOR_VALIDO);
        if (grade->getValue() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void GradeUT::testFailure() {
    try {
        grade->setValue(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (grade->getValue() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int GradeUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe CountryUT()
void CountryUT::setUp() {
    country = new Country();
    status = SUCCESS;
}

void CountryUT::tearDown() {
    delete country;
}

void CountryUT::testSuccess() {
    try {
        country->setName(VALOR_VALIDO);
        if (country->getName() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void CountryUT::testFailure() {
    try {
        country->setName(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (country->getName() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int CountryUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}

// Métodos da classe PasswordUT()
void PasswordUT::setUp() {
    password = new Password();
    status = SUCCESS;
}

void PasswordUT::tearDown() {
    delete password;
}

void PasswordUT::testSuccess() {
    try {
        password->setKeyword(VALOR_VALIDO);
        if (password->getKeyword() != VALOR_VALIDO) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except) {
        status = FAILURE;
    }
}

void PasswordUT::testFailure() {
    try {
        password->setKeyword(VALOR_INVALIDO);
        status = FAILURE;
    }
    catch (invalid_argument &except) {
        if (password->getKeyword() == VALOR_INVALIDO)
            status = FAILURE;
    }
}

int PasswordUT::run() {
    setUp();
    testSuccess();
    testFailure();
    tearDown();
    return status;
}
