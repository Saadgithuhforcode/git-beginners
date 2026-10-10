#include <iostream>

struct Car{

    std::string name;
    int year;
    std::string colour;

};

void printCar(Car &car);
void paintCar(Car &car, std::string paint);

int main(){

    Car car1;
    Car car2;
    std::string paint;

    car1.name = "BMW M8";
    car1.year = 2024;
    car1.colour = "blue";

    car2.name = "Mercedes Benz";
    car2.year = 2022;
    car2.colour = "black";

    printCar(car1);
    paintCar(car1, paint);
    printCar(car1);

    return 0;
}

void printCar(Car &car){

std::cout << car.name << '\n';
std::cout << car.year << '\n';
std::cout << car.colour << '\n';

}

void paintCar(Car &car, std::string paint){

    std::cout << "What colour should " << car.name << "'s new paint be?" << '\n';
    std::cin >> paint;

    car.colour = paint;
    std::cout << "Colour changed to " << car.colour << '\n'; 

}