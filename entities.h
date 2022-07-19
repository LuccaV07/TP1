#ifndef ENTITIES_H_INCLUDED
#define ENTITIES_H_INCLUDED

#include <string>
#include "domains.h"

///
/// Declaração da entidade que armazena informações
/// relevantes sobre um usuário cadastrado no sistema.
///
class User {
private:
    Name name;
    Email email;
    Password password;
    Language language;
    Date anniversary;
    Description text;
public:
    void setName(const Name&);
    Name getName() const;
    void setEmail(const Email&);
    Email getEmail() const;
    void setPassword(const Password&);
    Password getPassword() const;
    void setLanguage(const Language&);
    Language getLanguage() const;
    void setAnniversary(const Date&);
    Date getAnniversary() const;
    void setText(const Description&);
    Description getText() const;
};

inline void User::setName(const Name& name){
    this->name = name;
}

inline Name User::getName() const{
    return name;
}

inline void User::setEmail(const Email& email){
    this->email = email;
}

inline Email User::getEmail() const{
    return email;
}

inline void User::setPassword(const Password& password){
    this->password = password;
}

inline Password User::getPassword() const{
    return password;
}

inline void User::setLanguage(const Language& language){
    this->language = language;
}

inline Language User::getLanguage() const{
    return language;
}

inline void User::setAnniversary(const Date& anniversay){
    this->anniversary = anniversay;
}

inline Date User::getAnniversary() const{
    return anniversary;
}

inline void User::setText(const Description& text){
    this->text = text;
}

inline Description User::getText() const{
    return text;
}

///
/// Declaração da entidade que armazena a nota e
/// comentários feitos pelo usuário após o fim da
/// da sua reserva na hospedagem referente.
///
class Rating {
private:
    Code code;
    Grade grade;
    Description text;
public:
    void setCode(const Code&);
    Code getCode() const;
    void setGrade(const Grade&);
    Grade getGrade() const;
    void setText(const Description&);
    Description getText() const;
};

inline void Rating::setCode(const Code& code){
    this->code = code;
}

inline Code Rating::getCode() const{
    return code;
}

inline void Rating::setGrade(const Grade& grade){
    this->grade = grade;
}

inline Grade Rating::getGrade() const{
    return grade;
}

inline void Rating::setText(const Description& text){
    this->text = text;
}

inline Description Rating::getText() const{
    return text;
}

///
/// Declaração da entidade que armazena informações
/// relevantes sobre as acomodações cadastradas por
/// usuários do sistema.
///
class Accommodation {
private:
    Code code;
    City city;
    Country country;
    Grade grade;
    Description text;
public:
    void setCode(const Code&);
    Code getCode() const;
    void setCity(const City&);
    City getCity() const;
    void setCountry(const Country&);
    Country getCountry() const;
    void setGrade(const Grade&);
    Grade getGrade() const;
    void setText(const Description&);
    Description getText() const;
};

inline void Accommodation::setCode(const Code& code){
    this->code = code;
}

inline Code Accommodation::getCode() const{
    return code;
}

inline void Accommodation::setCity(const City& city){
    this->city = city;
}

inline City Accommodation::getCity() const{
    return city;
}

inline void Accommodation::setCountry(const Country& country){
    this->country = country;
}

inline Country Accommodation::getCountry() const{
    return country;
}

inline void Accommodation::setGrade(const Grade& grade){
    this->grade = grade;
}

inline Grade Accommodation::getGrade() const{
    return grade;
}

inline void Accommodation::setText(const Description& text){
    this->text = text;
}

inline Description Accommodation::getText() const{
    return text;
}

#endif // ENTITIES_H_INCLUDED
