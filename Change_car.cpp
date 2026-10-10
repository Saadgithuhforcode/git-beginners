#include <iostream>

struct Car{

    std::string name;
    int year;
    std::string colour;
    double miles = 0.0;
};

void printCar(Car &car);
void paintCar(Car &car, std::string paint);
void carMiles(Car &car, double newMiles);


int main(){

    Car car1;
    Car car2;
    std::string paint;
    double newMiles;
    
    
    int x;
    Car choiceCar;
    
    std::cout << "Which car do you want to choose?(1-2)" << '\n';
    std::cin >> x; 
    if(x == 1){
        choiceCar = car1;
    }else if(x == 2){
        choiceCar = car2;
    }else{
        std::cout << "value error, defaulted to car 1" << '\n';
        choiceCar = car1;
    }
    
    car1.name = "BMW M8";
    car1.year = 2024;
    car1.colour = "blue";
    
    car2.name = "Mercedes Benz";
    car2.year = 2022;
    car2.colour = "black";

    printCar(choiceCar);
    paintCar(choiceCar, paint);
    printCar(choiceCar);

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

void carMiles(Car &car, double newMiles){

    std::cout << "How many miles has the car been friven for?" << '\n';
    std::cin >> newMiles;

    car.miles = newMiles;
    
    //not done 

}