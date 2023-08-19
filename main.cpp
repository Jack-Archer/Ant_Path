#include <iostream>

#include "check_move.h"
#include "ant_path.h"



int main(){

    std::cout << "Starting move............." << std::endl;
    Coordinates stay_now(1000, 1000);
    AntPath ant(stay_now);
    ant.ExploreWorld();

    std::getchar();
return 0;
}
