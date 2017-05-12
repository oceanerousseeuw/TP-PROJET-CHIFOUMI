#include <iostream>
#include <glog/logging.h>
#include "game.hpp"

int main() {
    google::InitGoogleLogging("log_chifoumi");
    google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
    /*std::string texte = "Hello world !";
    std::cout << texte << std::endl;
    LOG(INFO) << "test" ;
    */

    std::string move;
    game g;
    do{
      std::cout << "move (pierre, feuille, ciseaux, quit):";
      std::cin >> move;
      
      g.play(move);
      std::cout << move  << " - " << g.getLastAiMove()<< " : " <<g.getLastResult() << std::endl;
 
    }while (move != "quit");
    
    if (move == "quit"){
      std::cout << "Au revoir !" << std::endl;
    }
    
    return 0;
}

