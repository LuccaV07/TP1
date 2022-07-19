#include <iostream>

#include "domains.h"
#include "entities.h"
#include "domainsUT.cpp"
#include "entitiesUT.cpp"

using namespace std;

int main()
{
    // Declaração dos testes de domínio
    CityUT city_test;
    CodeUT code_test;
    DateUT date_test;
    DescriptionUT description_test;
    EmailUT email_test;
    LanguageUT language_test;
    NameUT name_test;
    GradeUT grade_test;
    CountryUT country_test;
    PasswordUT password_test;
    // Declaração dos testes de entidade
    UserUT user_test;
    RatingUT rating_test;
    AccommodationUT accommodation_test;

    // Realização dos testes de domínio
    cout << "Teste dos Domínios: " << endl;
    switch (city_test.run()) {
        case CityUT::SUCCESS: cout << "Sucesso - Cidade" << endl;
        break;
        case CityUT::FAILURE: cout << "Falha - Cidade" << endl;
        break;
    }

    switch (code_test.run()) {
        case CodeUT::SUCCESS: cout << "Sucesso - Código" << endl;
        break;
        case CodeUT::FAILURE: cout << "Falha - Código" << endl;
        break;
    }

    switch (date_test.run()) {
        case DateUT::SUCCESS: cout << "Sucesso - Data" << endl;
        break;
        case DateUT::FAILURE: cout << "Falha - Data" << endl;
        break;
    }

    switch (description_test.run()) {
        case DescriptionUT::SUCCESS: cout << "Sucesso - Descrição" << endl;
        break;
        case DescriptionUT::FAILURE: cout << "Falha - Descrição" << endl;
        break;
    }

    switch (email_test.run()) {
        case EmailUT::SUCCESS: cout << "Sucesso - E-mail" << endl;
        break;
        case EmailUT::FAILURE: cout << "Falha - E-mail" << endl;
        break;
    }

    switch (language_test.run()) {
        case LanguageUT::SUCCESS: cout << "Sucesso - Idioma" << endl;
        break;
        case LanguageUT::FAILURE: cout << "Falha - Idioma" << endl;
        break;
    }

    switch (name_test.run()) {
        case NameUT::SUCCESS: cout << "Sucesso - Nome" << endl;
        break;
        case NameUT::FAILURE: cout << "Falha - Nome" << endl;
        break;
    }

    switch (grade_test.run()) {
        case GradeUT::SUCCESS: cout << "Sucesso - Nota" << endl;
        break;
        case GradeUT::FAILURE: cout << "Falha - Nota" << endl;
        break;
    }

    switch (country_test.run()) {
        case CountryUT::SUCCESS: cout << "Sucesso - País" << endl;
        break;
        case CountryUT::FAILURE: cout << "Falha - País" << endl;
        break;
    }

    switch (password_test.run()) {
        case PasswordUT::SUCCESS: cout << "Sucesso - Senha" << endl;
        break;
        case PasswordUT::FAILURE: cout << "Falha - Senha" << endl;
        break;
    }

    // Realização dos testes de entidade
    cout << "Testes das Entidades:" << endl;
    switch (user_test.run()) {
        case UserUT::SUCCESS: cout << "Sucesso - Usuário" << endl;
        break;
        case UserUT::FAILURE: cout << "Falha - Usuário" << endl;
        break;
    }

    switch (rating_test.run()) {
        case RatingUT::SUCCESS: cout << "Sucesso - Avaliação" << endl;
        break;
        case RatingUT::FAILURE: cout << "Falha - Avaliação" << endl;
        break;
    }

    switch (accommodation_test.run()) {
        case AccommodationUT::SUCCESS: cout << "Sucesso - Hospedagem" << endl;
        break;
        case AccommodationUT::FAILURE: cout << "Falha - Hospedagem" << endl;
        break;
    }

    return 0;
}
