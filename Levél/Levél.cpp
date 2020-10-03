


#include <iostream>

int main()
{
    std::string first_name, friend_name;
    //char friend_sex = 0;
    int age;
    std::cout << "Please write your name!\n";
    std::cin >>  first_name;
    std::cout << "Hello," << first_name << "\n\n";
    std::cout << "How are you?\n";
    std::cout << "I miss you!\n";
    
    std::cout << "What is your friend name?\n";
    
    std::cin >> friend_name;

    std::cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = 0;
    std::cout << "If your friend is female please write a f\n";
    std::cout << "If your friend is male please write a m\n";
    std::cout << "m or f?\n";
    std::cin >> friend_sex;
    if (friend_sex == 'f') {
        std::cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    else {
        std::cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    std::cout << "How old are you?\n";
    std::cin >> age;
    if (age < 0 || age > 110) {
        std::cout << "You're kidding!\n";
    }
    else {
        std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    }
    if (age < 12) {
        std::cout << "Next year you will be "<< age + 1 << ".\n";
    }
    else if (age == 17) {
        std::cout << "Next year you will be able to vote.\n";
    }
    else if (age >= 70) {
        std::cout << "I hope you are enjoying retirement.\n";
    }
    
    std::cout << "Yours sincerely\n\n " << first_name;

}


