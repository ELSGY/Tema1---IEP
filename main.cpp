#include <iostream>
#include <mutex>
#include "Basketball.cpp"
#include <memory>

using namespace std;
Basketball* createBasketballTeamInstance(){
    return (new Basketball("ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18"));
}

void teamGoesOnVacantion(Basketball &r){
        std::cout<<"Team goes on vacantion..." << std::endl;
        r.putOnVacantion();
}

void teamComesFromVacantion(Basketball &r){
        std::cout<<"Team comes from vacantion..." << std::endl;
        r.getOutVacantion();
}

class Vacantion{
    private: Basketball &lockPointer;

    public:
    Vacantion(Basketball &ptr):lockPointer(ptr){
        teamGoesOnVacantion(lockPointer);
    }

    ~Vacantion(){
        teamComesFromVacantion(lockPointer);
    }

};

    
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
    // TeamSport t3 ("ChicagoBulls", 12, "Wood", "Outdoor");
    // TeamSport t4 (t3);
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


    // TEMA 3

    // FOlosim ponteri de acest tip, pentru a folosi automat destructorul lor si pentru a nu pierde memorie nu alocarea dinamica a obiectelor cat si datelor pe care le contin
    // --> RESOURCE MANAGING OBJECTS

    std::cout<< "ʕ ·(エ)· ʔ" << std::endl;
    std::cout<< "# ----------------------AUTO_PTR---------------------- #" << std::endl; // --> DEPRACATED - avem pana si warning la build
 
    std::auto_ptr<Basketball> b1(createBasketballTeamInstance()); // b1 = new Basketball("ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18")

    b1->showDetails(); // "1", "+18"

    // auto_ptr poate pointa doar spre un singur obiect 
    std::auto_ptr<Basketball> b2(b1); // b1 -> b1 = new Basketball("ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18") 

    // la crearea unui nou pointer de tip auto_ptr folosind copy constructorul, obiectul copiat este setat pe null, nu poate exista mai mult de un pointer de tip auto_ptr in program(unic)
    b2->showDetails(); // "1", "+18"
    // b1->showDetails(); // --> Segmentation fault (core dumped) --> b1 -> null


    std::cout<< "ʕ ·(エ)· ʔ" << std::endl;
    std::cout<< "# ----------------------UNIQUE_PTR---------------------- #" << std::endl; 

    std::unique_ptr<Basketball> b3(createBasketballTeamInstance()); // b3 = new Basketball("ChicagoBulls", 11, "Grass", "Outdoor", "1", "+18")

    b3->showDetails();

    // std::unique_ptr<Basketball> b4(b3); --> depracated, metoda stearsa

    std::unique_ptr<Basketball> b4 = move(b3); // spunem ca obiectul de tip smart pointer b4 are acum grija de obiectul tinut de b3, iar b3 acum este null

    b4->setAge("10");
    b4->showDetails();

    // std::unique_ptr<Basketball> b7 = b3; // --> eroare

    // b3->showDetails(); // --> Segmentation fault (core dumped) --> b3 -> null

    std::cout<< "ʕ ·(エ)· ʔ" << std::endl;
    std::cout<< "# ----------------------SHARED_PTR---------------------- #" << std::endl; 

    shared_ptr<Basketball> sharedTeam(createBasketballTeamInstance());

    std::cout<< "Numar obiecte spre care pointeaza shared_ptr:" << sharedTeam.use_count() << std::endl;
    sharedTeam->showDetails();

    shared_ptr<Basketball> sharedTeam1(sharedTeam);

    std::cout<< "Numar obiecte spre care pointeaza shared_ptr:" << sharedTeam1.use_count() << std::endl;

    sharedTeam1->setAge("+1999");

    sharedTeam->showDetails();
    sharedTeam1->showDetails();

    //sharedTeam1.reset(); -> count = count - 1;

    shared_ptr<Basketball> sharedTeam3 = move(sharedTeam1); // nu e copiere, e doar transfer de ownership #VEZI MAI JOS

    std::cout<< "Numar obiecte spre care pointeaza shared_ptr:" << sharedTeam.use_count() << std::endl;
    sharedTeam->showDetails();
    // sharedTeam1->showDetails(); // --> Segmentation fault (core dumped) --> sharedTeam1 -> null 

    std::shared_ptr<Basketball> sharedTeam4 (sharedTeam1);

    std::weak_ptr<Basketball> weakPointer (sharedTeam3);
    std::cout<< "weak_ptr count:" << weakPointer.use_count() << std::endl;
    // weakPointer.reset();

    std::cout<< "ʕ ·(エ)· ʔ" << std::endl;
    std::cout<< "# ----------------------MUTEX---------------------- #" << std::endl; 

    Basketball bsk1 ("ChicagoBulls", 12, "Wood", "Outdoor", "1", "+18");
    Vacantion *teamOnVacantion = new Vacantion(bsk1);
    bsk1.isOnVacantion();
    bsk1.setAge("0912730");
    bsk1.showDetails();
    delete teamOnVacantion;
    bsk1.isOnVacantion();
    bsk1.setAge("0912730");
    bsk1.showDetails();

    

    std::cout<< "# ----------------------DESTRUCTORS---------------------- #" << std::endl;     
    
    return 0;
}

