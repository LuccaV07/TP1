#include "entitiesUT.h"

// Métodos da classe UserUT()
void UserUT::setUp() {
    user = new User();
    status = SUCCESS;
}

void UserUT::tearDown() {
    delete user;
}

void UserUT::testSuccess() {
    try {
        Name name;
        name.setName(VALOR_VALIDO_NAME);
        user->setName(name);
        if (user->getName().getName() != VALOR_VALIDO_NAME) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Email email;
        email.setAddress(VALOR_VALIDO_EMAIL);
        user->setEmail(email);
        if (user->getEmail().getAddress() != VALOR_VALIDO_EMAIL) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Password password;
        password.setKeyword(VALOR_VALIDO_PASSWORD);
        user->setPassword(password);
        if (user->getPassword().getKeyword() != VALOR_VALIDO_PASSWORD) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Language language;
        language.setName(VALOR_VALIDO_LANGUAGE);
        user->setLanguage(language);
        if (user->getLanguage().getName() != VALOR_VALIDO_LANGUAGE) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Date date;
        date.setDate(VALOR_VALIDO_DATE);
        user->setDate(date);
        if (user->getDate().getDate() != VALOR_VALIDO_DATE) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Description description;
        description.setText(VALOR_VALIDO_DESCRIPTION);
        user->setDescription(description);
        if (user->getDescription().getText() != VALOR_VALIDO_DESCRIPTION) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }
}

int UserUT::run() {
    setUp();
    testSuccess();
    tearDown();
    return status;
}

// Métodos da classe RatingUT()
void RatingUT::setUp() {
    rating = new Rating();
    status = SUCCESS;
}

void RatingUT::tearDown() {
    delete rating;
}

void RatingUT::testSuccess() {
    try {
        Code code;
        code.setValue(VALOR_VALIDO_CODE);
        rating->setCode(code);
        if (rating->getCode().getValue() != VALOR_VALIDO_CODE) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Grade grade;
        grade.setValue(VALOR_VALIDO_GRADE);
        rating->setGrade(grade);
        if (rating->getGrade().getValue() != VALOR_VALIDO_GRADE) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Description description;
        description.setText(VALOR_VALIDO_DESCRIPTION);
        rating->setDescription(description);
        if (rating->getDescription().getText() != VALOR_VALIDO_DESCRIPTION) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }
}

int RatingUT::run() {
    setUp();
    testSuccess();
    tearDown();
    return status;
}

// Métodos de AccommodationUT()
void AccommodationUT::setUp() {
    accommodation = new Accommodation();
    status = SUCCESS;
}

void AccommodationUT::tearDown() {
    delete accommodation;
}

void AccommodationUT::testSuccess() {
    try {
        Code code;
        code.setValue(VALOR_VALIDO_CODE);
        accommodation->setCode(code);
        if (accommodation->getCode().getValue() != VALOR_VALIDO_CODE) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        City city;
        city.setName(VALOR_VALIDO_CITY);
        accommodation->setCity(city);
        if (accommodation->getCity().getName() != VALOR_VALIDO_CITY) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Country country;
        country.setName(VALOR_VALIDO_COUNTRY);
        accommodation->setCountry(country);
        if (accommodation->getCountry().getName() != VALOR_VALIDO_COUNTRY) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Grade grade;
        grade.setValue(VALOR_VALIDO_GRADE);
        accommodation->setGrade(grade);
        if (accommodation->getGrade().getValue() != VALOR_VALIDO_GRADE) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }

    try {
        Description description;
        description.setText(VALOR_VALIDO_DESCRIPTION);
        accommodation->setDescription(description);
        if (accommodation->getDescription().getText() != VALOR_VALIDO_DESCRIPTION) {
            status = FAILURE;
        }
    }
    catch (invalid_argument &except){
        status = FAILURE;
    }
}

int AccommodationUT::run() {
    setUp();
    testSuccess();
    tearDown();
    return status;
}
