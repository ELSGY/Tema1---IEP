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
	//
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
	
	// DESTRUCTOR
	~TeamSport(){
		std::cout << "TeamSport deleted..." << std::endl;
	}

	// COPY CONSTRUCTOR
	TeamSport(const TeamSport &ts) = delete;

	// COPY ASSIGNMENT OPERATOR
	TeamSport& operator = (const TeamSport& ts);

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
};
