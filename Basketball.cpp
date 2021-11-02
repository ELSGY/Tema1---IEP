#include <iostream>
#include "TeamSport.cpp"

class Basketball : public TeamSport {
    private:
    std::string league;
    std::string age;

    public:
    Basketball()
    :league("NoSet"),
    age("NoSet")
   {
        std::cout << "Default basketball with initialization was created ..." << std::endl;
        std::cout << "LEAGUE: " << league << " |AGE: " << age << std::endl; 
        std::cout << std::endl;
    }

    Basketball(std::string name, int nr, std::string field, std::string env, std::string league, std::string age)
    :TeamSport(name, nr, field, env),
    league(league),
    age(age)
    {
        std::cout << "Default basketball with initialization was created ..." << std::endl;
        std::cout << "LEAGUE: " << league << " |AGE: " << age << std::endl; 
        std::cout << std::endl;
    }

    //DESTRUCTOR
    ~Basketball(){
        std::cout << "Basketball deleted..." << std::endl; 
        std::cout << std::endl;
    }

    // COPY CONSTRUCTOR
	Basketball(const Basketball& bs) = delete;

	// COPY ASSIGNMENT
	Basketball& operator = (const Basketball& bs);

};