#include <iostream>
#include <vector>
#include <string>   // To use getline (for getting the whle inputted line of string)
#include <stdlib.h> // To with console e.g. change its title
#include <chrono>   // To count and keep track of time (for delta)
#include <Windows.h>

void clear();

double time_delta() {
    std::chrono::high_resolution_clock timer;
    auto start = timer.now();
    auto stop = timer.now();

    double delta = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() / 1000.0;

    return delta;
}

void header() {
    std::cout << "Multilevel Inheritance: Game Player Class Example" << std::endl;
    std::cout << "Levels: KineticBody -> Player -> Actor -> PC, NPC, or Foe" << std::endl << std::endl;
}

class KinematicBody2D {
    private:
        bool need_collision_shape = true;
    
    protected:
        std::vector <double> collision_shape_size;
        std::vector <double> global_position;
        std::vector <double> other_position;
        std::vector <std::vector <double>> collision_shape_local_rect = {
            collision_shape_size,
            global_position
        };
        bool is_colliding = false;
};

class Player : public KinematicBody2D {
    private:
        bool is_pressing_input;
        std::string action_key;

    protected:
        double distance_to_other;
        double move_time;
        double speed;
        double self_mass;
        double other_mass;
        double weight;
        double gravity;

        // Set-Get Methods
        bool get_is_pressing() {
            return is_pressing_input;
        }
        std::string get_action_key() {
            return action_key;
        }

        void set_is_pressing(bool is_pressing) {
            is_pressing_input = is_pressing;
        }
        void set_action_key(std::string this_action) {
            action_key = this_action;
        }
    
    public:
        Player() {
            distance_to_other = std::distance(global_position.begin(), other_position.end());
            gravity = 9.8 * ((self_mass * other_mass) / (distance_to_other * distance_to_other));
            weight = ((self_mass * 0.11566605) * gravity);

            if(is_pressing_input == true) {
                if(action_key != "") {
                    move_time = 1.0 * time_delta();
                }
            } else {
                move_time = 0.0;
            }

            speed = (distance_to_other / move_time);
        }
};

class Actor : public Player {
    private:
        std::string type; // Playable Character e.g PC, NPC, or Foe
        double movement_speed;
        double attack_power;
        double defense_endurance;
        double base_magic_resistance;
        double fire_magic_resistance;
        double water_magic_resistance;
        double earth_magic_resistance;
        double air_magic_resistance;
        double holy_magic_resistance;
        double dark_magic_resistance;
        double base_magic_power;
        double fire_magic_power;
        double water_magic_power;
        double earth_magic_power;
        double air_magic_power;
        double holy_magic_power;
        double dark_magic_power;
        double accuracy_rate;
        double luck;
        std::vector <std::string> weapons;
        std::vector <std::string> armor;
        std::vector <std::string> ammunition;
        int level = 1;
        double experience = 0;

    protected:
        std::string name;
        std::string type_class;
    
    public:
        // Set-Get Methods
        std::string get_type() {
            return type;
        }
        std::string get_name() {
            return name;
        }
        double get_mass() {
            return self_mass;
        }

        void set_type(std::string this_type) {
            type = this_type;
        }
        void set_name(std::string this_name) {
            name = this_name;
        }
        void set_self_mass(double this_mass) {
            self_mass = this_mass;
        }
        
        void input() {
            do {
                if(GetKeyState('A') & 0x8000) {
                    set_is_pressing(true);
                    set_action_key("Left");

                    clear();
                    header();

                    std::cout << "The " << get_type() << " " << get_name() << " is moving left.";
                } else if(GetKeyState('D') & 0x8000) {
                    set_is_pressing(true);
                    set_action_key("Right");

                    clear();
                    header();
                    
                    std::cout << "The " << get_type() << " " << get_name() << " is moving right.";
                } else if(GetKeyState('W') & 0x8000) {
                    set_is_pressing(true);
                    set_action_key("Jump");

                    clear();
                    header();
                    
                    std::cout << "The " << get_type() << " " << get_name() << " has jumped.";
                } else if(GetKeyState(VK_SPACE) & 0x8000) {
                    set_is_pressing(true);
                    set_action_key("Jump");

                    clear();
                    header();
                    
                    std::cout << "The " << get_type() << " " << get_name() << " has jumped.";
                } else if(GetKeyState('S') & 0x8000) {
                    set_is_pressing(true);
                    set_action_key("Crouch");

                    clear();
                    header();
                    
                    std::cout << "The " << get_type() << " " << get_name() << " is crouching.";
                } else if(GetKeyState(VK_CONTROL) & 0x8000 && GetKeyState('C') & 0x8000) {
                    set_is_pressing(false);
                    set_action_key("Cancel Program");

                    clear();
                    header();
                    
                    std::cout << "The program is cancelled." << std::endl;
                } else {
                    set_is_pressing(false);
                    set_action_key("");

                    clear();
                    header();
                    
                    std::cout << "The " << get_type() << " " << get_name() << " is idle.";
                }
            } while (get_action_key() != "Cancel Program");
        }

        Actor(std::string given_type, std::string given_name, double given_mass) {
            set_type(given_type);
            set_name(given_name);
            set_self_mass(given_mass);

            input();
        }
};

int main() {
    system("title Multilevel Inheritance: Game Player Class Example");
    time_delta();
    clear();
    header();

    std::cout << "Welcome to Multilevel Inheritance: Game Player Class Example!" << std::endl;
    std::cout << "In this program, multiple inheritance is applied by having the" << std::endl;
    std::cout << "Actor class derive members from Player class, and the Player" << std::endl;
    std::cout << "class derives members from the KinematicBody2D class." << std::endl;
    std::cout << "This version is incomplete to demonstrate it by inputs, still," << std::endl;
    std::cout << "it serves its purpose as a class derives from a derived class." << std::endl << std::endl;
    std::cout << "Instructions:" << std::endl;
    std::cout << "Press AWSD keys to \'move\' and CTRL + C to cancel the program." << std::endl << std::endl;
    std::cout << "Note:" << std::endl;
    std::cout << "The update prior to actions i.e. whether keys are pressed and" << std::endl;
    std::cout << "what are them, causes flickering of the console program." << std::endl;
    std::cout << "I am yet to implement alternatives and fixes for this, as well" << std::endl;
    std::cout << "as updating it for using other members. Still, try to have fun" << std::endl;
    std::cout << "with this little experiment!" << std::endl;

    std::cin.get();

    Actor player("Swordsman", "Valkyrie", 77.382858);

    return 0;
}

void clear() {
    system("cls");
}