#ifndef ENTITIESUT_H_INCLUDED
#define ENTITIESUT_H_INCLUDED

#include "entities.h"

///
/// Definição do objeto responsáveis pelos testes de unidade
/// da entidade User()
///
class UserUT {
private:
    const static string VALOR_VALIDO_NAME;
    const static string VALOR_VALIDO_EMAIL;
    const static string VALOR_VALIDO_PASSWORD;
    const static string VALOR_VALIDO_LANGUAGE;
    const static string VALOR_VALIDO_ANNIVERSARY;
    const static string VALOR_VALIDO_TEXT;
    User *user;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string UserUT::VALOR_VALIDO_NAME = "Lucca Vivacqua";
inline const string UserUT::VALOR_VALIDO_EMAIL = "luccavivacqua123@gmail.com";
inline const string UserUT::VALOR_VALIDO_PASSWORD = "S&nh4";
inline const string UserUT::VALOR_VALIDO_LANGUAGE = "Português";
inline const string UserUT::VALOR_VALIDO_ANNIVERSARY = "24/Fev";
inline const string UserUT::VALOR_VALIDO_TEXT = "Este e um texto valido.";

///
/// Definição do objeto responsáveis pelos testes de unidade
/// da entidade Rating()
///
class RatingUT {
private:
    const static string VALOR_VALIDO_CODE;
    const static int VALOR_VALIDO_GRADE = 7;
    const static string VALOR_VALIDO_TEXT;
    Rating *rating;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string RatingUT::VALOR_VALIDO_CODE = "64826482917";
inline const string RatingUT::VALOR_VALIDO_TEXT = "Este e um texto valido.";

///
/// Definição do objeto responsáveis pelos testes de unidade
/// da entidade Accomodation()
///
class AccommodationUT {
private:
    const static string VALOR_VALIDO_CODE;
    const static string VALOR_VALIDO_CITY;
    const static string VALOR_VALIDO_COUNTRY;
    const static int VALOR_VALIDO_GRADE = 7;
    const static string VALOR_VALIDO_TEXT;
    int status;
    void setUp();
    void tearDown();
    void testSuccess();
public:
    const static int SUCCESS = 0;
    const static int FAILURE = -1;
    int run();
};

inline const string AccommodationUT::VALOR_VALIDO_CODE = "64826482917";
inline const string AccommodationUT::VALOR_VALIDO_CITY = "Seul";
inline const string AccommodationUT::VALOR_VALIDO_COUNTRY = "Brasil";
inline const string AccommodationUT::VALOR_VALIDO_TEXT = "Este e um texto valido.";

#endif // ENTITIESUT_H_INCLUDED
