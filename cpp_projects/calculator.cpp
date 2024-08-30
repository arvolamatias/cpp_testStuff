#include <iostream>
#include <set>


//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::set<char> validOperators = {'+','-','*','/'};

    std::cout << "************* CALCULATOR *************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;



    if (validOperators.find(op) != validOperators.end())
    {   
        std::cout << "Enter number #1: ";
        std::cin >> num1;

        std::cout << "Enter number #2: ";
        std::cin >> num2;
        switch (op)
        {
        case '+':
                result = num1 + num2;
                std::cout << "Result: " << result << "\n";
                break;
        case '-':
                result = num1 - num2;
                std::cout << "Result: " << result << "\n";
                break;
            case '*':
                result = num1 * num2;
                std::cout << "Result: " << result << "\n";
                break;
            case '/':
                result = num1 / num2;
                std::cout << "Result: " << result << "\n";
                break;
        
        default:
            break;
        }     
    } 
    else
    {
        std::cout << "Please input valid operator\n";
    }

    std::cout << "**************************************";

    return 0;
}