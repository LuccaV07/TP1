#ifndef DOMAINS_H_INCLUDED
#define DOMAINS_H_INCLUDED

#include <stdexcept>
#include <string>
using namespace std;

///
/// Declara��o do dom�nio que identifica o nome da cidade na qual a hospedagem se encontra.
///
/// Cont�m um atributo 'name', que � uma string representando o nome da cidade em quest�o,
/// desconsiderando acentua��o.
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
    "Macau", "Mumbai", "Paris", "Rio de Janeiro", "S�o Paulo", "Seul", "Istambul", "Kuala Lumpur",
    "Nova Iorque", "Osaka", "Phuket", "Shenzhen", "T�quio"};

///
/// Declara��o do dom�nio que define um identificador para avalia��es e hospedagens.
///
/// Consiste em uma string no formato DDDDDDDDDDX, onde D s�o d�gitos de 0 a 9 e X
/// � um d�gito de valida��o calculao com base no Algoritmo de Luhn.
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
/// Declara��o do dom�nio que define m�s e dia de nascimento de um usu�rio no formato
/// DD/MES, sendo DD os dias de 01 a 31 e MES um dos meses do ano abreviado a tr�s letras
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
/// Declara��o do dom�nio que se refere a textos de descri��o tanto para o usu�rio, quanto
/// para a hospedagem e para a avalia��o da hospedagem pelo usu�rio. Suporta de 0 a 40 ca-
/// racteres sem pontua��o ou espa�os em branco em sequ�ncia.
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
/// Declara��o do dom�nio referente � forma de contato que define um identificador
/// para o usu�rio no formato 'parte-local@dom�nio'.
///
/// 'parte-local' tem at� 64 caracteres entre letras, d�gitos e h�fens, underlines
/// e pontos, os 3 �ltimos, desde que seguidos por letra ou d�gito e que ponto n�o
/// seja o primeiro caracter.
///
/// 'dom�nio' � uma lista de termos separada por pontos, sendo que ponto n�o pode
/// ser o primeiro caracter nem ocorrer em sequ�ncia. � composto por 63 caracteres,
/// entre letras, d�gitos e h�fens, esse �ltimo desde que n�o seja primeiro ou �l-
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
/// Declara��o do dom�nio referente � l�ngua nativa do usu�rio em quest�o.
///
/// Cont�m um atributo 'name', que � uma string representando o idioma, des
/// considerando acentua��o.
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

inline const string Language::LANGUAGES[10] = {"Ingl�s", "Chin�s Mandarim", "Hindi", "Espanhol", "Franc�s", "�rabe", "Bengali",
    "Russo", "Portugu�s", "Indon�sio"};

///
/// Declara��o do dom�nio referente � forma de se identificar do usu�rio.
///
/// Cont�m um atributo 'name', uma string composta por at� 30 caracteres
/// composta por prenome e sobrenome, com at� 30 caracteres entre letras
/// mai�sculas (primeiro caracter do prenome e do sobrenome), min�sculas
/// (demais letras) e espa�os em branco, desde que n�o sejam sequenciais.
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
/// Declara��o do dom�nio referente � nota da avalia��o da hospedagem, fei-
/// ta pelo usu�rio.
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
/// Declara��o do dom�nio que identifica o nome do pa�s no qual a hospedagem se encontra.
///
/// Cont�m um atributo 'name', que � uma string representando o nome do pa�s em quest�o,
/// desconsiderando acentua��o.
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
    "Fran�a", "�ndia", "Jap�o", "Mal�sia", "Reino Unido", "Tail�ndia", "Turquia"};

///
/// Declara��o do dom�nio que armazena a palavra-chave que valida acesso do usu�rio ao
/// sistema.
///
/// Cont�m a senha definida pelo usu�rio, que � uma sequ�ncia XXXXX de caracteres entre
/// letras mai�sculas e min�sculas, d�gitos ou caracter especial, sendo que necessita de
/// ao menos um de cada para ser v�lida.
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
