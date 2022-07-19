#ifndef DOMAINS_H_INCLUDED
#define DOMAINS_H_INCLUDED

#include <stdexcept>
#include <string>
using namespace std;

///
/// Declaração do domínio que identifica o nome da cidade na qual a hospedagem se encontra.
///
/// Contém um atributo 'name', que é uma string representando o nome da cidade em questão,
/// desconsiderando acentuação.
///
class City {
private:
    static const string CITIES[20];
    string name;
    void validate(string name);
public:
    void setName(string name);
    string getName() const;
};

inline string City::getName() const{
    return name;
}

inline const string City::CITIES[20] = {"Antalya", "Bangkok", "Delhi", "Dubai", "Hong Kong", "Londres",
    "Macau", "Mumbai", "Paris", "Rio de Janeiro", "São Paulo", "Seul", "Istambul", "Kuala Lumpur",
    "Nova Iorque", "Osaka", "Phuket", "Shenzhen", "Tóquio"};

///
/// Declaração do domínio que define um identificador para avaliações e hospedagens.
///
/// Consiste em uma string no formato DDDDDDDDDDX, onde D são dígitos de 0 a 9 e X
/// é um dígito de validação calculao com base no Algoritmo de Luhn.
///
class Code {
private:
    static const int LENGTH = 11;
    string value;
    void validate(string);
public:
    void setValue(string);
    string getValue() const;
};

inline string Code::getValue() const{
    return value;
}

///
/// Declaração do domínio que define mês e dia de nascimento de um usuário no formato
/// DD/MES, sendo DD os dias de 01 a 31 e MES um dos meses do ano abreviado a três letras
/// (Jan, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez).
///
class Date {
private:
    static const int LOWER = 1;
    static const int UPPER = 31;
    static const string MONTH[12];
    string date;
    void validate(string);
public:
    void setDate(string);
    string getDate() const;
};

inline string Date::getDate() const{
    return date;
}

inline const string Date::MONTH[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

///
/// Declaração do domínio que se refere a textos de descrição tanto para o usuário, quanto
/// para a hospedagem e para a avaliação da hospedagem pelo usuário. Suporta de 0 a 40 ca-
/// racteres sem pontuação ou espaços em branco em sequência.
///
class Description {
private:
    static const int LENGTH = 40;
    string text;
    void validate(string);
public:
    void setText(string);
    string getText() const;
};

inline string Description::getText() const{
    return text;
}

///
/// Declaração do domínio referente à forma de contato que define um identificador
/// para o usuário no formato 'parte-local@domínio'.
///
/// 'parte-local' tem até 64 caracteres entre letras, dígitos e hífens, underlines
/// e pontos, os 3 últimos, desde que seguidos por letra ou dígito e que ponto não
/// seja o primeiro caracter.
///
/// 'domínio' é uma lista de termos separada por pontos, sendo que ponto não pode
/// ser o primeiro caracter nem ocorrer em sequência. É composto por 63 caracteres,
/// entre letras, dígitos e hífens, esse último desde que não seja primeiro ou úl-
/// timo caracter.
///
class Email {
private:
    static const int LOCAL_LENGTH = 64;
    static const int DOMAIN_TERM_LENGTH = 63;
    string address;
    void validate(string);
public:
    void setAddress(string);
    string getAddress() const;
};

inline string Email::getAddress() const{
    return address;
}

///
/// Declaração do domínio referente à língua nativa do usuário em questão.
///
/// Contém um atributo 'name', que é uma string representando o idioma, des
/// considerando acentuação.
///
class Language {
private:
    static const string LANGUAGES[10];
    string name;
    void validate(string);
public:
    void setName(string);
    string getName() const;
};

inline string Language::getName() const{
    return name;
}

inline const string Language::LANGUAGES[10] = {"Inglês", "Chinês Mandarim", "Hindi", "Espanhol", "Francês", "Árabe", "Bengali",
    "Russo", "Português", "Indonésio"};

///
/// Declaração do domínio referente à forma de se identificar do usuário.
///
/// Contém um atributo 'name', uma string composta por até 30 caracteres
/// composta por prenome e sobrenome, com até 30 caracteres entre letras
/// maiúsculas (primeiro caracter do prenome e do sobrenome), minúsculas
/// (demais letras) e espaços em branco, desde que não sejam sequenciais.
///
class Name {
private:
    static const int LENGTH = 30;
    string name;
    void validate(string);
public:
    void setName(string);
    string getName() const;
};

inline string Name::getName() const{
    return name;
}

///
/// Declaração do domínio referente à nota da avaliação da hospedagem, fei-
/// ta pelo usuário.
///
/// Deve ser um valor de 0 a 10.
///
class Grade {
private:
    static const int LOWER = 0;
    static const int UPPER = 10;
    int value;
    void validate(int);
public:
    void setValue(int);
    int getValue() const;
};

inline int Grade::getValue() const{
    return value;
}

///
/// Declaração do domínio que identifica o nome do país no qual a hospedagem se encontra.
///
/// Contém um atributo 'name', que é uma string representando o nome do país em questão,
/// desconsiderando acentuação.
///
class Country {
private:
    static const string COUNTRIES[12];
    string name;
    void validate(string);
public:
    void setName(string);
    string getName() const;
};

inline string Country::getName() const{
    return name;
}

inline const string Country::COUNTRIES[12] = {"Estados Unidos", "Brasil", "China", "Coreia do Sul", "Emirados",
    "França", "Índia", "Japão", "Malásia", "Reino Unido", "Tailândia", "Turquia"};

///
/// Declaração do domínio que armazena a palavra-chave que valida acesso do usuário ao
/// sistema.
///
/// Contém a senha definida pelo usuário, que é uma sequência XXXXX de caracteres entre
/// letras maiúsculas e minúsculas, dígitos ou caracter especial, sendo que necessita de
/// ao menos um de cada para ser válida.
///
class Password {
private:
    static const int LENGTH = 5;
    static const char SPECIAL_CHARS[5];
    string keyword;
    void validate(string);
public:
    void setKeyword(string);
    string getKeyword() const;
};

inline string Password::getKeyword() const{
    return keyword;
}

inline const char Password::SPECIAL_CHARS[5] = {'!', '#', '$', '%', '&'};

#endif // DOMAINS_H_INCLUDED
