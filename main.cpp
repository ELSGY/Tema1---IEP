#include <iostream>
#include <chrono>
#include <ctime>  
#include "TeamSport.cpp"

int main()
{

    TeamSport def{};

    def.setName("Basketball");
    def.setNrPlayersPerTeam(5);
    def.setFieldType("Wood");
    def.setEnvironment("Indoor");
    def.showDetails();
 
    TeamSport init{"Football", 11, "Grass", "Outdoor"}; 

    init = def;
    init.showDetails();
  
    return 0;
}

