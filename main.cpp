#include <iostream>

#include "check_move.h"
#include "ant_path.h"



int main(){

    Coordinates stay_now(1000, 1000);
    AntPath ant(stay_now);
    ant.ExploreWorld();
return 0;
}
