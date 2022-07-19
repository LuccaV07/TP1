#ifndef UNITTESTS_H_INCLUDED
#define UNITTESTS_H_INCLUDED

#include "domains.h"

using namespace std;

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio City()
///
class CityUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    City *city;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string CityUT::VALOR_VALIDO = "Seul";
inline const string CityUT::VALOR_INVALIDO = "Brasília";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Code()
///
class CodeUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Code *code;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string CodeUT::VALOR_VALIDO = "64826482917";
inline const string CodeUT::VALOR_INVALIDO = "64826482910";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Date()
///
class DateUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Date *date;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string DateUT::VALOR_VALIDO = "31/Dez";
inline const string DateUT::VALOR_INVALIDO = "36/Jan";

///
/// Definição dos objetos responsáveis pelos testes de unidade do
/// domínio Description()
///
class DescriptionUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Description *description;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string DescriptionUT::VALOR_VALIDO = "Este e um texto valido.";
inline const string DescriptionUT::VALOR_INVALIDO = "  Est& éh um,,,, v4l0   r invvvváÂãLido:::  .";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Email()
///
class EmailUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Email *email;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string EmailUT::VALOR_VALIDO = "parte-local@dominio.com";
inline const string EmailUT::VALOR_INVALIDO = "...parte--l0caaaal@....-ma--il..com::br";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Language()
///
class LanguageUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Language *language;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string LanguageUT::VALOR_VALIDO = "Português";
inline const string LanguageUT::VALOR_INVALIDO = "ÉLfico";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Name()
///
class NameUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Name *name;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string NameUT::VALOR_VALIDO = "Lucca Vivacqua";
inline const string NameUT::VALOR_INVALIDO = "lU77A vIv@cqUa";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Grade()
///
class GradeUT {
private:
    const static int VALOR_VALIDO = 7;
    const static int VALOR_INVALIDO = 15;
    Grade *grade;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Country()
///
class CountryUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Country *country;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string CountryUT::VALOR_VALIDO = "Brasil";
inline const string CountryUT::VALOR_INVALIDO = "Bangladesh";

///
/// Definição dos Objetos responsáveis pelos testes de unidade do
/// domínio Code()
///
class PasswordUT {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Password *password;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
    void testFailure();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string PasswordUT::VALOR_VALIDO = "S&nh4";
inline const string PasswordUT::VALOR_INVALIDO = "lucca";

#endif // UNITTESTS_H_INCLUDED
