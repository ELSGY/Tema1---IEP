#include <iostream>

class TeamSport{
	private:
	std::string name;
	int nrPlayersPerTeam;
	std::string fieldType;
	std::string environment;
	// std::string name = "NotSet";
	// int nrPlayersPerTeam = 0;
	// std::string fieldType = "NotSet";
	// std::string environment = "NotSet";
	 
	public:
	// constructor default fara initializare
	// TeamSport(){
	// 	std::cout << "Default sport with semi-random values was created..." << std::endl;
	// 	std::cout << "Name: " << name << " | PlayersPerTeam: " << nrPlayersPerTeam << " | FieldType: " << fieldType << " | Environment: " << environment << std::endl;
	// 	std::cout << std::endl;
	// }

    // constructor cu asignare
	// TeamSport(std::string name, int nr, std::string field, std::string env){
	// 	this->name = name;
	// 	this->nrPlayersPerTeam = nr;
	// 	this->fieldType = field;
	// 	this->environment = env;
	
	// 	std::cout << "Custom sport with assignation was created..." << std::endl;
	// 	std::cout << "Name: " << name << " | PlayersPerTeam: " << nrPlayersPerTeam << " | FieldType: " << fieldType << " | Environment: " << environment << std::endl;
	// 	std::cout << std::endl;
	// }

	// CONSTRUCTORI
	// constructori cu initializare -> "the responsability for initialization falls on constructors.""
	//"The rule there is simple: make sure that all constructors initialize everything in the object"
	TeamSport()
	:name("NotSet"),
	nrPlayersPerTeam(0),
	fieldType("NotSet"),
	environment("NotSet")
	{
		std::cout << "Default sport with initialization was created ..." << std::endl;
		std::cout << "Name: " << name << " | PlayersPerTeam: " << nrPlayersPerTeam << " | FieldType: " << fieldType << " | Environment: " << environment << std::endl;
		std::cout << std::endl;
	}

	TeamSport(std::string name, int nr, std::string field, std::string env)
	:name(name),
	nrPlayersPerTeam(nr),
	fieldType(field),
	environment(env)
	{
		std::cout << "Custom sport with initialization was created ..." << std::endl;
		std::cout << "Name: " << name << " | PlayersPerTeam: " << nrPlayersPerTeam << " | FieldType: " << fieldType << " | Environment: " << environment << std::endl;
		std::cout << std::endl;
	}

	// DESTRUCTOR -> virtual "Making base class destructor virtual guarantees that the object of derived class is desctructed properly."
	virtual ~TeamSport()
	{
		std::cout << "TeamSport deleted..." << std::endl; 
        std::cout << std::endl;
	}

	// COPY CONSTRUCTOR
	// TeamSport(const TeamSport& ts) = delete;

	// sau
	// private:
	// TeamSport(const TeamSport& ts);

	// COPY ASSIGNMENT
	// TeamSport& operator = (const TeamSport& ts);

	void setName(std::string name){
		this->name = name;
	}

	void setNrPlayersPerTeam(int nrPlayersPerTeam){
		this->nrPlayersPerTeam = nrPlayersPerTeam;
	}

	void setFieldType(std::string fieldType){
		this->fieldType = fieldType;
	}

	void setEnvironment(std::string environment){
		this->environment = environment;
	}

	void showDetails(){
		std::cout << "Name: " << name << " | PlayersPerTeam: " << nrPlayersPerTeam << " | FieldType: " << fieldType << " | Environment: " << environment << std::endl;
		std::cout << std::endl;
	}
	
	// Tema 2
	// COPY CONSTRUCTOR
	TeamSport(const TeamSport& ts)
	:name(ts.name),
	nrPlayersPerTeam(ts.nrPlayersPerTeam),
	fieldType(ts.fieldType),
	environment(ts.environment)
	{
		// OR
		// this->name = ts.name;
		// this->nrPlayersPerTeam = ts.nrPlayersPerTeam;
		// this->fieldType = ts.fieldType;
		// this->environment = ts.environment;

		std::cout << "COPY CONSTRUCTOR -> Copy every field when given an object as parameter to the constructor ..." << std::endl;
		std::cout << "Name: " << name << " | PlayersPerTeam: " << nrPlayersPerTeam << " | FieldType: " << fieldType << " | Environment: " << environment << std::endl;
		std::cout << std::endl;
		
	}

	// COPY ASSIGNMENT
	TeamSport& operator = (const TeamSport& ts)
	{	
		if(this == &ts)
		{
			std::cout<< "Self-assignment for TeamSport..abort copying.." << std::endl;
			std::cout << std::endl;
			return *this;
		}

		std::cout << "Copy fields from given reference..." << std::endl;
		name = ts.name;
		nrPlayersPerTeam = ts.nrPlayersPerTeam;
		fieldType = ts.fieldType;
		environment = ts.environment;

		// UNSAFE !
		// delete this;
		// this = new TeamSport(ts);
		// other method -> save a copy of original fields

		return *this;
	}

	void swap(const TeamSport& ts)
	{
		if(this == &ts)
		{
			std::cout<< "Won't swap same object's data.." << std::endl;
			std::cout << std::endl;
		
		}

		std::cout<< "Swapping data.." << std::endl;
		std::cout << std::endl;

		this->name = ts.name;
		this->nrPlayersPerTeam = ts.nrPlayersPerTeam;
		this->fieldType = ts.fieldType;
		this->environment = ts.environment;
	}

};
