#include <iostream>
#include "Basketball.cpp"

int main()
{
    // Tema 1

    // TeamSport def{};

    // def.setName("Basketball");
    // def.setNrPlayersPerTeam(5);
    // def.setFieldType("Wood");
    // def.setEnvironment("Indoor");
    // def.showDetails();
 
    // TeamSport init{"Football", 11, "Grass", "Outdoor"}; 

    // Basketball b{};
  
    // Basketball c{"ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18"};

    // TeamSport *ts1 = new Basketball("ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18");

    // TeamSport *ts2;

    // ts2 = ts1;
    // ts2->showDetails();

    // TeamSport *ts1 = new Basketball("ChicagoBulls", 12, "Wood", "Outdoor", "1", "+18");

    // delete ts;

    // TeamSport *ts2;

    // delete ts2;

    // TeamSport *bsk = new Basketball("ChicagoBulls", 12, "Wood", "Outdoor", "1", "+18");

    // delete bsk;

    // ts = ts1;

    // ts->showDetails();

    // TeamSport init{def};

    // TeamSport t1;
    // TeamSport t2;
    // copy constructor
    // TeamSport t3 (t2);
    // copy operator
    // t2 = t1; -> undefined reference to `TeamSport::operator=(TeamSport const&)'


    // Tema 2

    // TeamSport t1;
    // TeamSport t2;
    // copy constructor
    TeamSport t3 ("ChicagoBulls", 12, "Wood", "Outdoor");
    TeamSport t4 (t3);
    // copy operator
    // t1.setName("ChicagoBulls");
    // t1.setNrPlayersPerTeam(11);
    // t1.setFieldType("Grass");
    // t1.setEnvironment("Outdoor");
    // t1.showDetails();

    // t1 = t1;
    // t2 = t1;
    // t2.showDetails();

    // TeamSport t1 ("ChicagoBulls", 12, "Wood", "Outdoor");
    // TeamSport t2 ;

    // // t2 = t1;

    // t2.swap(t1);
    // t2.showDetails();
  
    // Basketball bsk1 ("ChicagoBulls", 12, "Wood", "Outdoor", "1", "+18");
    // Basketball bsk2;

    // bsk2.swap(bsk1);
    // bsk2.showDetails();

    // Basketball bsk3 = bsk2 = bsk1; // bsk2 = bsk1 -> bsk3 = bsk2


    return 0;
}

