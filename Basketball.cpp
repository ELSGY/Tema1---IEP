#include <iostream>
#include "TeamSport.cpp"



class Basketball : public TeamSport {
    private:
    std::string league;
    std::string age;
    bool onVacantion = false;

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
        std::cout << "Custom basketball with initialization was created ..." << std::endl;
        std::cout << "LEAGUE: " << league << " |AGE: " << age << std::endl; 
        std::cout << std::endl;
    }

    void setLeague(std::string league){
        if(!isOnVacantion()){
		this->league = league;
        }
	}

	void setAge(std::string age){
        if(!isOnVacantion()){
		this->age = age;
        }
	}



    //DESTRUCTOR
    ~Basketball(){
        std::cout << "Basketball deleted..." << std::endl; 
        std::cout << std::endl;
    }

    // COPY CONSTRUCTOR
	// Basketball(const Basketball& bs) = delete;

	// COPY ASSIGNMENT
	// Basketball& operator = (const Basketball& bs);

    // Tema 2

    // COPY CONSTRUCTOR
	Basketball(const Basketball& bs)
    :TeamSport(bs),
    league(bs.league),
    age(bs.age)
    {
        std::cout << "COPY CONSTRUCTOR -> Copy every field plus field from base class ..." << std::endl;
		this->showDetails();
        std::cout << "League: " << league << " | Age: " << age << std::endl;
		std::cout << std::endl;
    }

    // COPY ASSIGNMENT
    Basketball& operator = (const Basketball& bs)
    {
        if(this == &bs) // be aware when you use this -> IT COSTS!
		{
			std::cout<< "Self-assignment for Basketball..abort copying.." << std::endl;
			std::cout << std::endl;
			return *this;
		}

		std::cout << "Copy fields from given reference..." << std::endl;
        TeamSport::operator=(bs);
		league = bs.league;
		age = bs.age;
        this->showDetails();
        std::cout << "League: " << league << " | Age: " << age << std::endl;
		std::cout << std::endl;

		return *this;
	}

    void swap(const Basketball& bs)
    {
		if(this == &bs)
		{
			std::cout<< "Won't swap same object's data.." << std::endl;
			std::cout << std::endl;
		
		}

		std::cout<< "Swapping data.." << std::endl;
		std::cout << std::endl;

        TeamSport::operator=(bs);
		this->league = bs.league;
		this->age = bs.age;

	}

    void showDetails(){
		std::cout << "League: " << league << " | Age: " << age << std::endl;
		std::cout << std::endl;
	}

    // Tema 3

    void putOnVacantion(){
        this->onVacantion = true;
    }

    void getOutVacantion(){
        this->onVacantion = false;
    }

    bool isOnVacantion(){
        if(this->onVacantion){
            std::cout<<"Echipa este in vacanta!Nu poate participa la turneu..." << std::endl;
            return true;
        }else{
            std::cout<<"Echipa poate participa la turneu..." << std::endl;
            return false;
    }
}

};