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
void showAfterall(Car &car);

int main(){

    Car car1;
    Car car2;
    std::string paint;
    double newMiles;
    

    car1.name = "BMW M8";
    car1.year = 2024;
    car1.colour = "blue";
    
    car2.name = "Mercedes Benz";
    car2.year = 2022;
    car2.colour = "black";

    int x;
    Car choiceCar;

    std::cout << "Which car do you want to choose?(1-2)" << '\n';
    std::cin >> x;
    std::cout << '\n'; 
    if(x == 1){
        choiceCar = car1;
    }else if(x == 2){
        choiceCar = car2;
    }else{
        std::cout << "value error, defaulted to car 1" << '\n';
        choiceCar = car1;
    }

    printCar(choiceCar);
    paintCar(choiceCar, paint);
    carMiles(choiceCar, newMiles);
    showAfterall(choiceCar);

    return 0;
}

void printCar(Car &car){

std::cout << "The car's name is " <<car.name << '\n';
std::cout << "The car was made in " <<car.year << '\n';
std::cout << "The car's current colour is " << car.colour << '\n';
std::cout << '\n';
}

void showAfterall(Car &car){

std::cout << "The car's name is " <<car.name << '\n';
std::cout << "The car was made in " <<car.year << '\n';
std::cout << "The car's current colour is " << car.colour << '\n';
std::cout << "The car has been driven for " <<car.miles << '\n';
std::cout << '\n';
}


void paintCar(Car &car, std::string paint){

    std::cout << "What colour should " << car.name << "'s new paint be?" << '\n';
    std::cin >> paint;

    car.colour = paint;
    std::cout << "Colour changed to " << car.colour << '\n'; 
    std::cout << '\n';

}

void carMiles(Car &car, double newMiles){

    std::cout << "How many miles has the car been driven for?" << '\n';
    std::cin >> newMiles;

    car.miles = newMiles;
    
    std::cout << "Miles are now " << car.miles << '\n';
    std::cout << '\n';

}