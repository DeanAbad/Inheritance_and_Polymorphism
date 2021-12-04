#include <iostream>
#include <vector>
#include <string>   // To use getline (for getting the whle inputted line of string)
#include <stdlib.h> // To with console e.g. change its title

void clear();

void header(int this_page) {
    std::cout << "Multiple Inheritance: Basic Character Maker Simulator" << std::endl;
    std::cout << "Creating a character: Student" << std::endl;
    std::cout << "Currently on page " << this_page << " of 25 pages." << std::endl << std::endl;
}

class Individual {
    protected:
        std::string name;
        std::string sex;
        std::string pronoun1, pronoun2;
        std::vector <std::string> likes;
        int age;
        int likes_number;
    
    public:
        void identity() {
            clear();
            header(12);

            if(sex == "MALE" || sex == "Male" || sex == "male" || sex == "m" || sex == "M") {
                pronoun1 = "he";
                pronoun2 = "his";
            } else if (sex == "FEMALE" || sex == "Female" || sex == "female" || sex == "f" || sex == "F") {
                pronoun1 = "she";
                pronoun2 = "her";
            } else {
                pronoun1 = "he";
                pronoun2 = "his";
            }
            
            std::cout << "It seems that " << pronoun1 << " has a total of " << likes_number << " number of things that " << pronoun1 << " likes." << std::endl;
            std::cout << "Are you familiar with the things " << pronoun1 << " likes?" << std::endl;

            int an_index = 0;
            std::string something_liked;
            while(an_index < likes_number) {
                std::cout << std::to_string(an_index + 1) << ".) Enter something " << name << " likes: ";
                std::getline(std::cin, something_liked);
                likes.push_back(something_liked);

                an_index++;
            }
        };
};

class Vanity {
    protected:
        std::vector <std::string> upper_body_clothing;
        std::vector <std::string> lower_body_clothing;
        std::vector <std::string> head_accessories;
        std::vector <std::string> neck_accessories;
        std::vector <std::string> wrist_accessories;
        std::vector <std::string> hand_accessories;

        int upper_clothing_total;
        int lower_clothing_total;

        int the_head_accessories_total;
        int the_neck_accessories_total;
        int the_wrist_accessories_total;
        int the_hand_accessories_total;
        std::string head_accessories_total;
        std::string neck_accessories_total;
        std::string wrist_accessories_total;
        std::string hand_accessories_total;

        bool got_head_accessory;
        bool got_neck_accessory;
        bool got_wrist_accessory;
        bool got_hand_accessory;

    public:
        std::vector <std::vector<std::string>> clothing;

        void worn_clothes() {
            clear();
            header(13);

            if(upper_clothing_total > 0) {
                std::cout << "There is a total of " << upper_clothing_total << " worn upper clothings. Kindly state what are those." << std::endl;

                int an_index = 0;
                std::string an_upper_clothing;
                while(an_index < upper_clothing_total) {
                    std::cout << std::to_string(an_index + 1) << ".) Enter an upper clothing: ";
                    std::getline(std::cin, an_upper_clothing);
                    upper_body_clothing.push_back(an_upper_clothing);

                    an_index++;
                }
            } else {
                std::cout << "It seems that clothing on the upper body is not present." << std::endl;
                upper_body_clothing.push_back("none");
            }

            clear();
            header(14);

            if(lower_clothing_total > 0) {
                std::cout << "There is a total of " << lower_clothing_total << " worn lower clothings. Kindly state what are those." << std::endl;

                int an_index = 0;
                std::string a_lower_clothing;
                while(an_index < lower_clothing_total) {
                    std::cout << std::to_string(an_index + 1) << ".) Enter an lower clothing: ";
                    std::getline(std::cin, a_lower_clothing);
                    lower_body_clothing.push_back(a_lower_clothing);

                    an_index++;
                }
            } else {
                std::cout << "It seems that clothing on the lower body is not present." << std::endl;
                lower_body_clothing.push_back("none");
            }

            clear();
            header(15);

            if(got_head_accessory == true) {
                std::cout << "It seems that head accessories are worn." << std::endl;
                std::cout << "Enter the number of accessories the head have: ";
                std::getline(std::cin, head_accessories_total);

                the_head_accessories_total = std::stoi(head_accessories_total);

                if(the_head_accessories_total > 0) {
                    std::cout << "Since there are " << the_head_accessories_total << " head accessories, state what are those." << std::endl;

                    int an_index = 0;
                    std::string a_head_accessory;
                    while(an_index < the_head_accessories_total) {
                        std::cout << std::to_string(an_index + 1) << ".) Enter a head accessory: ";
                        std::getline(std::cin, a_head_accessory);
                        head_accessories.push_back(a_head_accessory);

                        an_index++;
                    }
                } else {
                    std::cout << "It seems that head accessories are not present." << std::endl;
                    head_accessories.push_back("none");
                }
            } else {
                std::cout << "It seems that head accessories are not present." << std::endl;
                head_accessories.push_back("none");
            }

            clear();
            header(16);

            if(got_neck_accessory == true) {
                std::cout << "It seems that neck accessories are worn." << std::endl;
                std::cout << "Enter the number of accessories the neck have: ";
                std::getline(std::cin, neck_accessories_total);

                the_neck_accessories_total = std::stoi(neck_accessories_total);

                if(the_neck_accessories_total > 0) {
                    std::cout << "Since there are " << the_neck_accessories_total << " neck accessories, state what are those." << std::endl;

                    int an_index = 0;
                    std::string a_neck_accessory;
                    while(an_index < the_neck_accessories_total) {
                        std::cout << std::to_string(an_index + 1) << ".) Enter a neck accessory: ";
                        std::getline(std::cin, a_neck_accessory);
                        neck_accessories.push_back(a_neck_accessory);

                        an_index++;
                    }
                } else {
                    std::cout << "It seems that neck accessories are not present." << std::endl;
                    neck_accessories.push_back("none");
                }
            } else {
                std::cout << "It seems that neck accessories are not present." << std::endl;
                neck_accessories.push_back("none");
            }

            clear();
            header(17);

            if(got_wrist_accessory == true) {
                std::cout << "It seems that wrist accessories are worn." << std::endl;
                std::cout << "Enter the number of accessories the wrist have: ";
                std::getline(std::cin, wrist_accessories_total);

                the_wrist_accessories_total = std::stoi(wrist_accessories_total);

                if(the_wrist_accessories_total > 0) {
                    std::cout << "Since there are " << the_wrist_accessories_total << " wrist accessories, state what are those." << std::endl;

                    int an_index = 0;
                    std::string a_wrist_accessory;
                    while(an_index < the_wrist_accessories_total) {
                        std::cout << std::to_string(an_index + 1) << ".) Enter a wrist accessory: ";
                        std::getline(std::cin, a_wrist_accessory);
                        wrist_accessories.push_back(a_wrist_accessory);

                        an_index++;
                    }
                } else {
                    std::cout << "It seems that wrist accessories are not present." << std::endl;
                    wrist_accessories.push_back("none");
                }
            } else {
                std::cout << "It seems that wrist accessories are not present." << std::endl;
                wrist_accessories.push_back("none");
            }

            clear();
            header(18);

            if(got_hand_accessory == true) {
                std::cout << "It seems that hand accessories are worn." << std::endl;
                std::cout << "Enter the number of accessories the hands have: ";
                std::getline(std::cin, hand_accessories_total);

                the_hand_accessories_total = std::stoi(hand_accessories_total);

                if(the_hand_accessories_total > 0) {
                    std::cout << "Since there are " << the_hand_accessories_total << " hand accessories, state what are those." << std::endl;

                    int an_index = 0;
                    std::string a_hand_accessory;
                    while(an_index < the_hand_accessories_total) {
                        std::cout << std::to_string(an_index + 1) << ".) Enter a hand accessory: ";
                        std::getline(std::cin, a_hand_accessory);
                        hand_accessories.push_back(a_hand_accessory);

                        an_index++;
                    }
                } else {
                    std::cout << "It seems that hand accessories are not present." << std::endl;
                    hand_accessories.push_back("none");
                }
            } else {
                std::cout << "It seems that hand accessories are not present." << std::endl;
                hand_accessories.push_back("none");
            }

            clothing.push_back(upper_body_clothing);
            clothing.push_back(lower_body_clothing);
            clothing.push_back(head_accessories);
            clothing.push_back(neck_accessories);
            clothing.push_back(wrist_accessories);
            clothing.push_back(hand_accessories);
        }
};

class ClassRecord {
    protected:
        int student_grade_level;
        int total_subjects;
        std::string school;
        std::string grade_level;
        std::string section;
        std::string number_of_subjects;
        std::string a_subject;
        std::string an_answer;
        std::vector <std::string> current_subjects;
        bool got_bad_record;

        std::vector <std::string> grade_levels = {
            "Nursery",
            "Kindergarten",
            "Preparatory",
            "Grade 1",
            "Grade 2",
            "Grade 3",
            "Grade 4",
            "Grade 5",
            "Grade 6",
            "Grade 7",
            "Grade 10",
            "Grade 11",
            "Grade 12",
            "1st Year College",
            "2nd Year College",
            "3rd Year College",
            "4th Year College",
            "5th Year College",
            "6th Year College"
        };

    public:
        void record() {
            clear();
            header(19);

            std::cout << "What is the name of the school that is currently attending with?" << std::endl;
            std::cout << "Enter the school name or abbreviation: ";
            std::getline(std::cin, school);

            clear();
            header(20);

            std::cout << "What is the student's grade level currently?" << std::endl;
            for(size_t an_index = 0; an_index < grade_levels.size(); an_index++) {
                std::cout << std::to_string(an_index + 1) << ".) " << grade_levels[an_index] << std::endl;
            }
            std::cout << "Enter the grade level: ";
            std::getline(std::cin, grade_level);
            student_grade_level = std::stoi(grade_level);

            clear();
            header(21);

            std::cout << "What is the name of the student's section?" << std::endl;
            std::cout << "Enter the name of the section: ";
            std::getline(std::cin, section);

            clear();
            header(22);

            std::cout << "How many subjects are being taken in current semester?" << std::endl;
            std::cout << "Enter the number of subjects: ";
            std::getline(std::cin, number_of_subjects);
            total_subjects = std::stoi(number_of_subjects);

            clear();
            header(23);

            std::cout << "There are a total of " << total_subjects << " number of subjects being taken in the semester." << std::endl;
            std::cout << "Kindly state each subject." << std::endl;
            for(size_t an_index = 0; an_index < total_subjects; an_index++) {
                std::cout << std::to_string(an_index + 1)  << ".) Enter a subject: ";
                std::getline(std::cin, a_subject);
                current_subjects.push_back(a_subject);
            }

            clear();
            header(24);

            std::cout << "Is there a bad record or not in school? Yes or no: ";
            std::getline(std::cin, an_answer);
        }
};

// class Civilian(std::string the_name, int the_age, std::string biological_sex, int total_likes, int number_of_upper_clothing, int number_of_lower_clothing, bool has_head_accessory, bool has_neck_accessory, bool has_wrist_accessory, bool has_hand_accessory)
class Civilian : public Individual, public Vanity, public ClassRecord {
    public:
        Civilian(
            std::string the_name,
            int the_age,
            std::string biological_sex,
            int total_likes,
            int number_of_upper_clothing,
            int number_of_lower_clothing,
            bool has_head_accessory,
            bool has_neck_accessory,
            bool has_wrist_accessory,
            bool has_hand_accessory
        ) {
            name = the_name;
            age = the_age;
            sex = biological_sex;
            likes_number = total_likes;
            upper_clothing_total = number_of_upper_clothing;
            lower_clothing_total = number_of_lower_clothing;
            got_head_accessory = has_head_accessory;
            got_neck_accessory = has_neck_accessory;
            got_wrist_accessory = has_wrist_accessory;
            got_hand_accessory = has_hand_accessory;
            
            identity();
            worn_clothes();
            record();

            clear();
            header(25);

            std::cout << "Character Information: " << std::endl;

            if(age <= 0) {
                std::cout << "The developing baby's name is ";
            } else if(age <= 3 && age >= 1) {
                std::cout << "The baby's name is ";
            } else if(age <= 12 && age > 3) {
                std::cout << "The child's name is ";
            } else if(age <= 17 && age > 12) {
                std::cout << "The teen's name is ";
            } else if(age <= 111 && age > 17) {
                std::cout << "The adult's name is ";
            } else {
                std::cout << "The name of the deceased is ";
            }

            std::cout << name << ", and currently, " << pronoun1 << " is " << age << " years old." << std::endl;

            pronoun2.replace(0, 1, "H");
            std::cout << pronoun2 << " likes are " << likes.size() << " in total, and its ";
            
            if(likes.size() == 1) {
                std::cout << "a " << likes[0] << "." << std::endl;
            } else if(likes.size() == 2) {
                std::cout << "a " << likes[1] << " and " << likes[0] << "." << std::endl;
            } else if(likes.size() > 2) {
                for(size_t an_index = 0; an_index < likes.size(); an_index++) {
                    while(an_index != likes.size() - 1) {
                        std::cout << likes.at(an_index) << ", ";
                        an_index++;
                    }
                    std::cout << "and " << likes[likes.size() - 1] << "." << std::endl;
                }
            } else {
                std::cout << "nothing." << std::endl;
            }
            
            if(sex == "MALE" || sex == "Male" || sex == "male" || sex == "m" || sex == "M") {
                pronoun1.replace(0, 1, "H");
            } else if (sex == "FEMALE" || sex == "Female" || sex == "female" || sex == "f" || sex == "F") {
                pronoun1.replace(0, 1, "S");
            }
            
            std::cout << std::endl << pronoun1 << " wears";

            if(upper_body_clothing[0] != "none") {
                std::cout << " an upper body clothing,";
            } else {
                std::cout << " nothing on upper body,";
            }

            if(lower_body_clothing[0] != "none") {
                std::cout << " a lower body clothing,";
            } else {
                std::cout << " nothing on lower body,";
            }

            if(head_accessories[0] != "none") {
                if(head_accessories.size() != 1) {
                    std::cout << " a head accessory,";
                } else {
                    std::cout << " a set of head accessories,";
                }
            } else {
                std::cout << " no head accessories,";
            }

            if(neck_accessories[0] != "none") {
                if(neck_accessories.size() != 1) {
                    std::cout << " a neck accessory,";
                } else {
                    std::cout << " a set of neck accessories,";
                }
            } else {
                std::cout << " no neck accessories,";
            }

            if(wrist_accessories[0] != "none") {
                if(wrist_accessories.size() != 1) {
                    std::cout << " a wrist accessory,";
                } else {
                    std::cout << " a set of wrist accessories,";
                }
            } else {
                std::cout << " no wrist accessories,";
            }

            if(hand_accessories[0] != "none") {
                if(hand_accessories.size() != 1) {
                    std::cout << " and a hand accessory." << std::endl;
                } else {
                    std::cout << " and a set of hand accessories." << std::endl;
                }
            } else {
                std::cout << " and no hand accessories." << std::endl;
            }

            if(sex == "MALE" || sex == "Male" || sex == "male" || sex == "m" || sex == "M") {
                pronoun1.replace(0, 1, "h");
            } else if (sex == "FEMALE" || sex == "Female" || sex == "female" || sex == "f" || sex == "F") {
                pronoun1.replace(0, 1, "s");
            }

            if(head_accessories.size() > 0 && head_accessories[0] != "none") {
                std::cout << "In terms of " << head_accessories.size() << " head accessories, " << pronoun1 << " wears ";
                for(size_t an_index = 0; an_index < head_accessories.size(); an_index++) {
                    if(head_accessories.size() > 2) {
                        if(an_index < head_accessories.size() - 1) {
                            std::cout << head_accessories.at(an_index) << ", ";
                        } else {
                            std::cout << "and " << head_accessories[head_accessories.size() - 1] << "." << std::endl;
                        }
                    } else if (head_accessories.size() < 2) {
                        std::cout << head_accessories[0] << "." << std::endl;
                    }
                }
            }

            if(neck_accessories.size() > 0 && neck_accessories[0] != "none") {
                std::cout << "In terms of " << neck_accessories.size() << " neck accessories, " << pronoun1 << " wears ";
                for(size_t an_index = 0; an_index < neck_accessories.size(); an_index++) {
                    if(neck_accessories.size() > 2) {
                        if(an_index < neck_accessories.size() - 1) {
                            std::cout << neck_accessories.at(an_index) << ", ";
                        } else {
                            std::cout << "and " << neck_accessories[neck_accessories.size() - 1] << "." << std::endl;
                        }
                    } else if (neck_accessories.size() < 2) {
                        std::cout << neck_accessories[0] << "." << std::endl;
                    }
                }
            }

            if(wrist_accessories.size() > 0 && wrist_accessories[0] != "none") {
                std::cout << "In terms of " << wrist_accessories.size() << " wrist accessories, " << pronoun1 << " wears ";
                for(size_t an_index = 0; an_index < wrist_accessories.size(); an_index++) {
                    if(wrist_accessories.size() > 2) {
                        if(an_index < wrist_accessories.size() - 1) {
                            std::cout << wrist_accessories.at(an_index) << ", ";
                        } else {
                            std::cout << "and " << wrist_accessories[wrist_accessories.size() - 1] << "." << std::endl;
                        }
                    } else if (wrist_accessories.size() < 2) {
                        std::cout << wrist_accessories[0] << "." << std::endl;
                    }
                }
            }

            if(hand_accessories.size() > 0 && hand_accessories[0] != "none") {
                std::cout << "In terms of " << hand_accessories.size() << " hand accessories, " << pronoun1 << " wears ";
                for(size_t an_index = 0; an_index < hand_accessories.size(); an_index++) {
                    if(hand_accessories.size() > 2) {
                        if(an_index < hand_accessories.size() - 1) {
                            std::cout << hand_accessories.at(an_index) << ", ";
                        } else {
                            std::cout << "and " << hand_accessories[hand_accessories.size() - 1] << "." << std::endl;
                        }
                    } else if (hand_accessories.size() < 2) {
                        std::cout << hand_accessories[0] << "." << std::endl;
                    }
                }
            }

            std::cout << std::endl;

            if(sex == "MALE" || sex == "Male" || sex == "male" || sex == "m" || sex == "M") {
                pronoun2.replace(0, 1, "H");
            } else if (sex == "FEMALE" || sex == "Female" || sex == "female" || sex == "f" || sex == "F") {
                pronoun2.replace(0, 1, "H");
            }

            if(sex == "MALE" || sex == "Male" || sex == "male" || sex == "m" || sex == "M") {
                pronoun1.replace(0, 1, "h");
            } else if (sex == "FEMALE" || sex == "Female" || sex == "female" || sex == "f" || sex == "F") {
                pronoun1.replace(0, 1, "s");
            }

            if(school != "") {
                std::cout << "The school " << pronoun1 << " is currently attending is " << school << "." << std::endl;
            } else {
                std::cout << "Currently, " << pronoun1 << " is not attending any school." << std::endl;
            }

            if(student_grade_level > 0 && student_grade_level <= grade_levels.size()) {
                std::cout << pronoun2 << " current grade level is " << grade_levels[student_grade_level - 1] << "." << std::endl;
            } else {
                std::cout << pronoun2 << " current grade level is unknown.";
            }

            if(section != "") {
                std::cout << "The section " << pronoun1 << " is currently attending is " << section << "." << std::endl;
            } else {
                std::cout << pronoun1 << " section is unknown." << std::endl;
            }

            std::cout << "The subjects currently being taken ";
            if(current_subjects.size() == 1) {
                std::cout << "a " << current_subjects[0] << "." << std::endl;
            } else if(current_subjects.size() == 2) {
                std::cout << "a " << current_subjects[1] << " and " << current_subjects[0] << "." << std::endl;
            } else if(current_subjects.size() > 2) {
                for(size_t an_index = 0; an_index < current_subjects.size(); an_index++) {
                    while(an_index != current_subjects.size() - 1) {
                        std::cout << current_subjects.at(an_index) << ", ";
                        an_index++;
                    }
                    std::cout << "and " << current_subjects[current_subjects.size() - 1] << "." << std::endl;
                }
            } else {
                std::cout << "are nothing." << std::endl;
            }

            if(sex == "MALE" || sex == "Male" || sex == "male" || sex == "m" || sex == "M") {
                pronoun1.replace(0, 1, "H");
            } else if (sex == "FEMALE" || sex == "Female" || sex == "female" || sex == "f" || sex == "F") {
                pronoun1.replace(0, 1, "S");
            }

            if(an_answer == "YES" || an_answer == "Yes" || an_answer == "yes" || an_answer == "y" || an_answer == "Y") {
                std::cout << pronoun1 << " has a bad record in school." << std::endl;
            } else if(an_answer == "NO" || an_answer == "No" || an_answer == "no" || an_answer == "n" || an_answer == "N") {
                std::cout << pronoun1 << " did not have any bad record in school." << std::endl;
            } else {

                std::cout << pronoun2 << " record in school is unknown." << std::endl;
            }

            // As a console program: to prevent temporarily the automatic closing of the program
            std::string enter;
            std::cout << std::endl;
            std::cout << "Press ENTER to continue..." << std::endl;
            std::getline(std::cin, enter);
        }
};

int main() {
    system("title Multiple Inheritance: Basic Character Maker Simulator");

    clear();
    header(1);

    std::string student_name;
    std::string student_age;
    std::string student_biological_sex;
    std::string student_number_of_likes;
    std::string student_number_of_upper_clothes;
    std::string student_number_of_lower_clothes;

    std::string has_head_accessories;
    std::string has_neck_accessories;
    std::string has_wrist_accessories;
    std::string has_hand_accessories;
    
    bool student_has_head_accessories;
    bool student_has_neck_accessories;
    bool student_has_wrist_accessories;
    bool student_has_hand_accessories;

    std::string enter;

    std::cout << "Welcome to the Multiple Inheritance: Basic Character Maker Simulator!" << std::endl;
    std::cout << "This is part of a school activity where examples are a must, and this" << std::endl;
    std::cout << "simple console program has a multiple inheritance with its class." << std::endl << std::endl;
    std::cout << "This program uses multiple inheritance to make a character (but less" << std::endl;
    std::cout << "the graphics). The class that was used is the \'Civilian\' class, and" << std::endl;
    std::cout << "it will derive properties from two classes e.g. the \'Individual\' and" << std::endl;
    std::cout << "\'Vanity\' classes. Frankly, that is the purpose of this program, but" << std::endl;
    std::cout << "it seems that I will use it in the future when I come back on making" << std::endl;
    std::cout << "games. Anyways, enjoy building and have fun!" << std::endl << std::endl;
    std::cout << "P.S. Hopefully, this program makes sense of its purpose as an example." << std::endl << std::endl;
    std::cout << "Press ENTER to continue..." << std::endl;

    std::getline(std::cin, enter);

    clear();
    header(2);

    std::cout << "Enter student's name: ";
    std::getline(std::cin, student_name);

    clear();
    header(3);

    std::cout << "Enter student's age: ";
    std::getline(std::cin, student_age);

    clear();
    header(4);

    std::cout << "Enter student's biological sex: ";
    std::getline(std::cin, student_biological_sex);

    clear();
    header(5);

    std::cout << "Enter student's number of liked things: ";
    std::getline(std::cin, student_number_of_likes);

    clear();
    header(6);

    std::cout << "Enter student's number of upper clothing: ";
    std::getline(std::cin, student_number_of_upper_clothes);

    clear();
    header(7);

    std::cout << "Enter student's number of lower clothing: ";
    std::getline(std::cin, student_number_of_lower_clothes);

    clear();
    header(8);

    std::cout << "Does the student have head accessories? Yes or no: ";
    std::getline(std::cin, has_head_accessories);

    if(has_head_accessories == "YES" || has_head_accessories == "Yes" || has_head_accessories == "yes" || has_head_accessories == "y" || has_head_accessories == "Y") {
        student_has_head_accessories = true;
    } else {
        student_has_head_accessories = false;
    }

    clear();
    header(9);

    std::cout << "Does the student have neck accessories? Yes or no: ";
    std::getline(std::cin, has_neck_accessories);

    if(has_neck_accessories == "YES" || has_neck_accessories == "Yes" || has_neck_accessories == "yes" || has_neck_accessories == "y" || has_neck_accessories == "Y") {
        student_has_neck_accessories = true;
    } else {
        student_has_neck_accessories = false;
    }

    clear();
    header(10);

    std::cout << "Does the student have wrist accessories? Yes or no: ";
    std::getline(std::cin, has_wrist_accessories);

    if(has_wrist_accessories == "YES" || has_wrist_accessories == "Yes" || has_wrist_accessories == "yes" || has_wrist_accessories == "y" || has_wrist_accessories == "Y") {
        student_has_wrist_accessories = true;
    } else {
        student_has_wrist_accessories = false;
    }

    clear();
    header(11);

    std::cout << "Does the student have hand accessories? Yes or no: ";
    std::getline(std::cin, has_hand_accessories);

    if(has_hand_accessories == "YES" || has_hand_accessories == "Yes" || has_hand_accessories == "yes" || has_hand_accessories == "y" || has_hand_accessories == "Y") {
        student_has_hand_accessories = true;
    } else {
        student_has_hand_accessories = false;
    }

    int the_student_age = std::stoi(student_age);
    int the_student_number_of_likes = std::stoi(student_number_of_likes);
    int the_student_total_upper_clothes = std::stoi(student_number_of_upper_clothes);
    int the_student_total_lower_clothes = std::stoi(student_number_of_lower_clothes);

    Civilian a_student(
        student_name,
        the_student_age,
        student_biological_sex,
        the_student_number_of_likes,
        the_student_total_upper_clothes,
        the_student_total_lower_clothes,
        student_has_head_accessories,
        student_has_neck_accessories,
        student_has_wrist_accessories,
        student_has_hand_accessories
    );

    return 0;
}

void clear() {
    system("cls");
}