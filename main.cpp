#include <iostream>
#include "Basketball.cpp"

int main()
{

    TeamSport def{};

    def.setName("Basketball");
    def.setNrPlayersPerTeam(5);
    def.setFieldType("Wood");
    def.setEnvironment("Indoor");
    def.showDetails();
 
    // TeamSport init{"Football", 11, "Grass", "Outdoor"}; 

    // Basketball b{};
  
    // Basketball c{"ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18"};

    // TeamSport *ts = new Basketball("ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18");

    // TeamSport *ts1 = new Basketball("ChicagoBulls", 12, "Wood", "Outdoor", "1", "+18");

    // ts = ts1;

    // ts->showDetails();

    // TeamSport init{def};

    TeamSport t1;
    TeamSport t2;
    // copy constructor
    TeamSport t3 (t2);
    // copy operator
    // t2 = t1;

 
    // delete ts;

    return 0;
}

