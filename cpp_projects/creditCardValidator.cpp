#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEavenDigits(const std::string cardNumber);
int main(){

    std::string cardNumber;
    int result = 0;
    std::cout << "enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEavenDigits(cardNumber) + sumOddDigits(cardNumber);

    result % 10 == 0 ? std::cout << cardNumber << " is valid" : std::cout << cardNumber << " is not valid";

    return 0;
}
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >=0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEavenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >=0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}