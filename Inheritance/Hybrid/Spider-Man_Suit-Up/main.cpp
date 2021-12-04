#include <iostream>
#include <vector>

void clear();

void header() {
    std::cout << "Hybrid Inheritance: Spider-Man Suit-Up" << std::endl;
    std::cout << "\'Read some details about the Spider-Man himself.\'" << std::endl << std::endl;
}

// "With great power, comes with great responsibility."
class Responsibility {
    private:
        std::string identity = "Peter Parker";
        std::string sex = "Male";
        std::string status = "Single";
        std::string school = "Massachusetts Institute of Technology (MIT)";

        std::vector <std::string> role_models = { "Uncle Ben Parker", "Aunt May Parker", "Gwen Stacy" };
        std::vector <std::string> dear_ones = { "Ned Leeds", "Harry Osborn", "Mary Jane" };
        std::vector <std::string> friends = { "Flash \'Agent Venom\' Thompson", "Eddie \'Venom\' Brock" };
        std::vector <std::string> mentors = { "Tony \'Iron Man\' Stark", "Dr. Steven Strange" };
        std::vector <std::string> successors = { "Miles \'Spider-Man\' Morales" };

        int age = 16;
        double raw_physical_power = 9999.9999;
        double raw_physical_defense = 9999.9999;

    protected:
        std::vector <std::string> places = {
            "New York",
            "Italy",
            "England"
        };
};

// DynamicLens, perfect to see what expression Spidey is making
class DynamicLens {
    protected:
        std::string product = "Stark Industries";
    
    public:
        std::vector <std::string> layers = { "base plate", "mesomembrane", "armor lens", "frame 1", "frame 2", "smart lens" };
};

// The base is made of Kevlar, one of the most relient materials to ever exist
class KevlarBase {
    public:
        std::string compound = "Kevlar";
        double endurance = 999.999;
        double sturdiness = 999.999;
};

// The SmartCircuit is capable of relaying information for advanced remote guide automation
// Also aids Parker in combat with optimized webshooter combos and 
class SmartCircuit {
    private:
        std::vector <std::string> components = { "qubit processor", "thermal regulator", "integrated fiber optics", "memory allocator" };

    protected:
        std::string product = "Stark Industries";

        std::string get_component(int this_index) {
            return components[this_index];
        }
};

// The classic mask but with upgrades
class SpandexMask : public DynamicLens {
    public:
        std::string material = "spandex";

        SpandexMask() {
            std::cout << "The SpandexMask is made out of " << material << " and is installed with DynamicLens." << std::endl;
            std::cout << "Its DynamicLens consists of ";

            for(size_t an_index = 0; an_index < layers.size() - 1; an_index++) {
                while(an_index != layers.size() - 1) {
                    std::cout << layers.at(an_index) << ", ";
                    an_index++;
                }
                std::cout << "and " << layers[layers.size() - 1] << "." << std::endl << std::endl;
            } 
        }
};

// The classic suit added with an armor
class SpandexSuit : protected KevlarBase, private SmartCircuit {
    public:
        std::string material = "spandex";
        std::vector <std::string> logos = { "thin black spider with elongated legs", "round red spider with short legs" };
        std::vector <std::string> colors = { "red", "blue", "black"};

        SpandexSuit() {
            std::cout << "The SpandexSuit is made out of " << material << " and it is coated in ";
            
            for(size_t an_index = 0; an_index < colors.size() - 1; an_index++) {
                while(an_index != colors.size() - 1) {
                    std::cout << colors.at(an_index) << ", ";
                    an_index++;
                }
                std::cout << "and " << colors[colors.size() - 1] << "." << std::endl;
            }

            std::cout << "It also has a " << logos[0] << " logo at the front, and a " << logos[1] << " logo at the back." << std::endl;
            std::cout << "The suit itself contains more functionalities compared to its looks." << std::endl << std::endl;
            std::cout << "Beneath its surface layer comes a KevlarBase, a special compact armor suit that is composed of " << compound << "." << std::endl;
            std::cout << "It promises a toughness worthing " << endurance << " and a sturdiness of " << sturdiness << "." << std::endl;
            std::cout << "Furthermore, it contains a SmartCircuit which was added by the " << SmartCircuit::product << "," << std::endl;
            std::cout << "and this component allows the suit to be integrated with the latest tech of " << SmartCircuit::product << "." << std::endl << std::endl;
        }
};

// Big thanks from Stark, Avengers, and SHIELD affiliates
class NanoTech {
    private:
        int quantity = 999999.999;

    protected:
        std::string product = "Stark Industries";
    
    public:
        NanoTech() {
            std::cout << "Under the suit also lies numbers of NanoTech, and as of now they are in a total of " << quantity << " in quantity." << std::endl;
            std::cout << "As for being one of " << NanoTech::product << "'s products, the NanoTech will also prove to be useful and come with surprising features, especially in dire moments." << std::endl << std::endl;
        }
};

// The suit perfectly fits to its rightful owner
class Suit : public SpandexSuit, public SpandexMask, public NanoTech {
    public:
        Suit() {
            std::cout << "Overall, the suit is made up of necessities that will allow Spider-Man to work more efficiently on saving the day." << std::endl << std::endl;
        }
};

// Where the webs came from
class Ammunition {
    protected:
        std::vector <std::string> bullets = { "web", "taser web", "web grenade", "ricochet web", "tempo web" };
};

// One of Tony's brilliant inventions is here to aid Spider-Man
// Adjusts and adapts to battles thanks to the NanoTech and SmartCircuit
class StarkCanister : public Ammunition {
    private:
        std::vector <std::string> shots;
    
    protected:
        // Set-Get Methods
        void set_shot_types() {
            for(size_t an_index = 0; an_index < bullets.size() - 1; an_index++) {
                while(an_index != bullets.size() - 1) {
                    shots.push_back(bullets[an_index]);
                }
            }
        }
        int get_shot_types() {
            return shots.size();
        }
        std::string get_shot(int this_shell) {
            return shots[this_shell];
        }
};

// Just a little upgrade from the Sorcerer Supreme Strange himself
class StrangeCast {
    private:
        std::string mystic_arts = "Supreme Spell";
        double magic_power = 999999.999;
};

// The iconic webshooter, without it, Spider-Man would only be a cheap Superman
class WebShooter : public StarkCanister, public StrangeCast {
    protected:
        std::string status = "stable";
};

class SpiderMan : public Responsibility, public Suit, public WebShooter {
    private:
        bool is_okay = true;
        bool is_tired = true;
        bool is_anxious = true;
    
    public:
        SpiderMan() {
            std::cout << "He may be Spider-Man, but behind his mask still lies a vulnerable person." << std::endl << std::endl;
        }
};

int main() {
    system("title Hybrid Inheritance: Spider-Man Suit-Up");
    clear();
    header();

    std::cout << "Welcome to this program! Here, the hybrid type of inheritance in programming" << std::endl;
    std::cout << "is applied in C++ i.e. each derived class has its numbers of derivations from" << std::endl;
    std::cout << "other classes." << std::endl << std::endl;
    std::cout << "The model:" << std::endl;
    std::cout << "............................................................................." << std::endl;
    std::cout << "............................................................................." << std::endl;
    std::cout << "..[KevlarBase]...[SmartCircuit].............................................." << std::endl;
    std::cout << ".......|...............|....................................................." << std::endl;
    std::cout << ".......|_______________|....................................................." << std::endl;
    std::cout << ".........|..................................................................." << std::endl;
    std::cout << ".........|.......[DynamicLens]................[Ammunition]..................." << std::endl;
    std::cout << ".........|.............|............................|........................" << std::endl;
    std::cout << "..[SpandexSuit]..[SpandexMask]..[NanoTech]...[StarkCanister]..[StrangeCast].." << std::endl;
    std::cout << ".........|_____________|_____________|..............|_______________|........" << std::endl;
    std::cout << ".........................|.................................|................." << std::endl;
    std::cout << "..[Responsibility].....[Suit].........................[WebShooter]..........." << std::endl;
    std::cout << ".........|_______________|_________________________________|................." << std::endl;
    std::cout << "......................................|......................................" << std::endl;
    std::cout << ".................................[Spider-Man]................................" << std::endl;
    std::cout << "............................................................................." << std::endl;
    
    std::cin.get();

    SpiderMan spiderman_2021;

    std::cout << "Press any key to continue...";
    std::cin.get();

    return 0;
}

void clear() {
    system("cls");
}