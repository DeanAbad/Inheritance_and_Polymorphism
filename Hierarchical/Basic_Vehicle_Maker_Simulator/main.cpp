#include <iostream>
#include <vector>
#include <string>   // To use getline (for getting the whle inputted line of string)
#include <stdlib.h> // To with console e.g. change its title

void clear();

void header(int this_page) {
    std::cout << "Hierarchical Inheritance: Basic Vehicle Maker Simulator" << std::endl;
    std::cout << "Creating a vehicle:" << std::endl;
    std::cout << "Currently on page " << this_page << " of 7 pages of this vehicle customization." << std::endl << std::endl;
}

class Vehicle {
    protected:
        int number_of_headlights;
        int number_of_rearlights;
        int number_of_addons;
        std::string exterior_paint;
        std::string type_of_vehicle;
        std::string brand;
        std::string model;
        std::string addons_total;
        std::string an_addon;
        std::string enter;
        std::vector <std::string> addons;

    public:
        Vehicle() {
            clear();
            header(1);

            std::cout << "What are specifications of the vehicle?" << std::endl;
            std::cout << "Let's start with its type. What kind of vehicle is it?" << std::endl;
            std::cout << "Enter the type of the vehicle (e.g. bus, taxi, etc.): ";
            std::getline(std::cin, type_of_vehicle);

            clear();
            header(2);

            std::cout << "What is the brand of the vehicle?" << std::endl;
            std::cout << "Enter the brand of the vehicle (e.g. Honda, Toyota, etc.): ";
            std::getline(std::cin, brand);

            clear();
            header(3);

            std::cout << "What is the model of the vehicle?" << std::endl;
            std::cout << "Enter the model of the vehicle (e.g. 350Z, Focus, etc.): ";
            std::getline(std::cin, model);

            clear();
            header(4);

            std::cout << "What kind of paint which coats the vehicle?" << std::endl;
            std::cout << "Enter the type of paint of the vehicle (e.g. glossy pink," << std::endl;
            std::cout << "metallic gray, pearlescent lime and orange, etc): ";
            std::getline(std::cin, exterior_paint);

            clear();
            header(5);

            std::cout << "Are there any addons like spoilers, and roof and hood scoops?" << std::endl;
            std::cout << "If so, enter how many will be installed." << std::endl;
            std::cout << "Enter how many addons will be installed: ";
            std::getline(std::cin, addons_total);
            number_of_addons = std::stoi(addons_total);

            clear();
            header(6);

            std::cout << "It seems that there is a total of " << number_of_addons << " that will be installed." << std::endl;
            std::cout << "State what are the addons." << std::endl;
            if(number_of_addons > 0) {
                for(size_t an_index = 0; an_index < number_of_addons; an_index++) {
                    std::cout << std::to_string(an_index + 1) << ".) Enter an addon: ";
                    std::getline(std::cin, an_addon);
                    addons.push_back(an_addon);
                }
            } else {
                addons.push_back("none");
            }

            clear();
            header(7);

            std::cout << "The process of building the vehicle is done." << std::endl;
            std::cout << "Press ENTER to continue..." << std::endl;
            std::getline(std::cin, enter);
        }

        void specifications() {
            clear();
            std::cout << "Hierarchical Inheritance: Basic Vehicle Maker Simulator" << std::endl;
            std::cout << "The " << exterior_paint << " " << brand << " " << model << " " << type_of_vehicle << "\'s specifications: " << std::endl;
            std::cout << "Currently on vehicle's information page." << std::endl << std::endl;

            std::cout << "These are the details of the vehicle: " << std::endl;

            if(type_of_vehicle != "") {
                std::cout << "1.) The vehicle is a kind of ";
                if(type_of_vehicle.at(0) == 'a' || type_of_vehicle.at(0) == 'e' || type_of_vehicle.at(0) == 'i' || type_of_vehicle.at(0) == 'o' || type_of_vehicle.at(0) == 'u' || type_of_vehicle.at(0) == 'A' || type_of_vehicle.at(0) == 'E' || type_of_vehicle.at(0) == 'I' || type_of_vehicle.at(0) == 'O' || type_of_vehicle.at(0) == 'U') {
                    std::cout << "an " << type_of_vehicle << "." << std::endl;
                } else {
                    std::cout << "a " << type_of_vehicle << "." << std::endl;
                }
            } else {
                std::cout << "1.) The type of vehicle is unknown." << std::endl;
            }

            if(brand != "") {
                std::cout << "2.) The vehicle is ";
                if(brand.at(0) == 'a' || brand.at(0) == 'e' || brand.at(0) == 'i' || brand.at(0) == 'o' || brand.at(0) == 'u' || brand.at(0) == 'A' || brand.at(0) == 'E' || brand.at(0) == 'I' || brand.at(0) == 'O' || brand.at(0) == 'U') {
                    std::cout << "an " << brand << " brand." << std::endl;
                } else {
                    std::cout << "a " << brand << " brand." << std::endl;
                }
            } else {
                std::cout << "2.) The type of brand is unknown." << std::endl;
            }

            if(model != "") {
                std::cout << "3.) The vehicle is ";
                if(model.at(0) == 'a' || model.at(0) == 'e' || model.at(0) == 'i' || model.at(0) == 'o' || model.at(0) == 'u' || model.at(0) == 'A' || model.at(0) == 'E' || model.at(0) == 'I' || model.at(0) == 'O' || model.at(0) == 'U') {
                    std::cout << "an " << model << " model." << std::endl;
                } else {
                    std::cout << "a " << model << " model." << std::endl;
                }
            } else {
                std::cout << "3.) The type of model is unknown." << std::endl;
            }

            if(exterior_paint != "") {
                std::cout << "4.) It is painted in ";
                if(exterior_paint.at(0) == 'a' || exterior_paint.at(0) == 'e' || exterior_paint.at(0) == 'i' || exterior_paint.at(0) == 'o' || exterior_paint.at(0) == 'u' || exterior_paint.at(0) == 'A' || exterior_paint.at(0) == 'E' || exterior_paint.at(0) == 'I' || exterior_paint.at(0) == 'O' || exterior_paint.at(0) == 'U') {
                    std::cout << "an " << exterior_paint << " paint." << std::endl;
                } else {
                    std::cout << "a " << exterior_paint << " paint." << std::endl;
                }
            } else {
                std::cout << "4.) The type of paint is unknown." << std::endl;
            }

            if(addons[0] != "") {
                std::cout << "5.) There is a total of " << number_of_addons;
                if(number_of_addons > 1) {
                    std::cout << " addon ";
                } else {
                    std::cout << " addons ";
                }
                std::cout << "that will be installed to the " << exterior_paint << " coated " << brand << " " << model << "." << std::endl;

                std::cout << "The ";
                if(number_of_addons > 1) {
                    std::cout << "addon is ";
                } else {
                    std::cout << "addons are ";
                }

                if(addons[0].at(0) == 'a' || addons[0].at(0) == 'e' || addons[0].at(0) == 'i' || addons[0].at(0) == 'o' || addons[0].at(0) == 'u' || addons[0].at(0) == 'A' || addons[0].at(0) == 'E' || addons[0].at(0) == 'I' || addons[0].at(0) == 'O' || addons[0].at(0) == 'U') {
                    std::cout << "an ";
                } else {
                    std::cout << "a ";
                }

                if(number_of_addons == 1) {
                    std::cout << addons[0] << "." << std::endl;
                } else if(number_of_addons == 2) {
                    std::cout << addons[1] << " and " << addons[0] << "." << std::endl;
                } else if(number_of_addons > 2) {
                    for(size_t an_index = 0; an_index < number_of_addons; an_index++) {
                        while(an_index != number_of_addons - 1) {
                            std::cout << addons.at(an_index) << ", ";
                            an_index++;
                        }
                        std::cout << "and " << addons[number_of_addons - 1] << "." << std::endl;
                    }
                }
            } else {
                std::cout << "5.) The type of paint is unknown." << std::endl;
            }

            std::cout << "Press ENTER to continue..." << std::endl;
            std::getline(std::cin, enter);
        }
};

class Vehicle1 : public Vehicle {};
class Vehicle2 : public Vehicle {};
class Vehicle3 : public Vehicle {};

int main() {
    std::string enter;

    system("title Hierarchical Inheritance: Basic Vehicle Maker Simulator");
    clear();
    
    std::cout << "Hierarchical Inheritance: Basic Vehicle Maker Simulator" << std::endl;
    std::cout << "Creating a vehicle:" << std::endl;
    std::cout << "Currently on main page." << std::endl << std::endl;

    std::cout << "Welcome to \'Hierarchical Inheritance: Basic Vehicle Maker Simulator\'!" << std::endl;
    std::cout << "This program was made for demonstrating how hierarchical inheritance works." << std::endl;
    std::cout << "In this program, the main class, \'Vehicle\' derives 3 children from itself," << std::endl;
    std::cout << "namely \'Vehicle1\', \'Vehicle2\', and \'Vehicle3\'. The same questions will" << std::endl;
    std::cout << "be asked per class as they derive the same questions from the same base class." << std::endl;
    std::cout << "Anyways, have fun on creating a vehicle!" << std::endl << std::endl;
    std::cout << "Press ENTER to continue..." << std::endl;
    std::getline(std::cin, enter);

    Vehicle1 first_vehicle;
    Vehicle2 second_vehicle;
    Vehicle3 third_vehicle;

    first_vehicle.specifications();
    second_vehicle.specifications();
    third_vehicle.specifications();

    return 0;
}

void clear() {
    system("cls");
}