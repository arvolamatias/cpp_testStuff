#include <iostream>

template <typename T, typename U>

auto max(T x, U y){
    return(x > y) ? x : y;
}

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main () {

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2020;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2021;
    car2.color = "blue";

    printCar(car1);
    paintCar(car2, "black");
    printCar(car2);
    return 0;
}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    car.color = color;
}


    