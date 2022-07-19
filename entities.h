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
    Date date;
    Description description;
public:
    void setName(const Name&);
    Name getName() const;
    void setEmail(const Email&);
    Email getEmail() const;
    void setPassword(const Password&);
    Password getPassword() const;
    void setLanguage(const Language&);
    Language getLanguage() const;
    void setDate(const Date&);
    Date getDate() const;
    void setDescription(const Description&);
    Description getDescription() const;
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

inline void User::setDate(const Date& date){
    this->date = date;
}

inline Date User::getDate() const{
    return date;
}

inline void User::setDescription(const Description& description){
    this->description = description;
}

inline Description User::getDescription() const{
    return description;
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
    Description description;
public:
    void setCode(const Code&);
    Code getCode() const;
    void setGrade(const Grade&);
    Grade getGrade() const;
    void setDescription(const Description&);
    Description getDescription() const;
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

inline void Rating::setDescription(const Description& description){
    this->description = description;
}

inline Description Rating::getDescription() const{
    return description;
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
    Description description;
public:
    void setCode(const Code&);
    Code getCode() const;
    void setCity(const City&);
    City getCity() const;
    void setCountry(const Country&);
    Country getCountry() const;
    void setGrade(const Grade&);
    Grade getGrade() const;
    void setDescription(const Description&);
    Description getDescription() const;
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

inline void Accommodation::setDescription(const Description& description){
    this->description = description;
}

inline Description Accommodation::getDescription() const{
    return description;
}

#endif // ENTITIES_H_INCLUDED
