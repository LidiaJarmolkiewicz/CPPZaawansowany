#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<regex>
#include <algorithm>
class User
{
public:
    User(std::string login,std::string password):
        _login(login),_password(password){};
    std::string getPassword()
    {

        return _password;
    };
    std::string getLogin()
        {
            return _login;
        }
      ~User(){};
private:
    std::string _login;
    std::string _password;
};
int main()
{
    std::string fileName("secret_file.csv");
    std::ifstream file(fileName);


    if (!file.is_open())
    {
        std::cout << "nie otworzyles pliku do odczytu";
        return 0;
    }

    std::vector<User> users;
    std::string login;
    std::string password;

    std::getline(file, login);//zjedzenie naglowka

    while (std::getline(file, login, ','))//getlnie wczytuje wszystko do napotkania pierwszego , -> to wczytuje login i usuwa przecinek
    {
        std::getline(file, password);//wczytaj mi do znaku konca lini
        users.emplace_back(login, password); //tworzy Usera i przekazuje mu te parametry do c - tora
    }
    file.close();

    std::vector<User> badPassword;
    auto checkPassword = []( User& user) {
        std::regex condition("^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)[a-zA-Z\d]{8,}$");
        std::regex_match(user.getPassword(), condition);
        return user.getPassword().size() < 8;
    };
    
    std::copy_if(users.begin(), users.end(), std::back_inserter(badPassword), checkPassword);

    for_each(badPassword.begin(), badPassword.end(), []( User& user)
        {std::cout << user.getLogin() << " : " << user.getPassword() << std::endl; });



    std::string fileName2("usersData.txt");
    std::ofstream file2(fileName2, std::ios::out || std::ios::app);
    if (file2.is_open())
    {
        for (int i = 0; i < badPassword.size(); ++i)
        {
            if (file2.good())
            {
                file2 << badPassword[i].getLogin() << "," << badPassword[i].getPassword();
            }
        }
        file2.close();
    }
    else
    {
        std::cout << "nie otworzono pliku do zapisu";
        return -1;
    }


};
   

