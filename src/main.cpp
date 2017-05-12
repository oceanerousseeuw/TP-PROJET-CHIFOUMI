#include <iostream>
#include <glog/logging.h>
#include "game.hpp"

/*! \mainpage chifoumi
 * @author moi
 *
 * Un jeu petit mais puissant !
 */

int main() {
    google::InitGoogleLogging("log_chifoumi");
    google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
    // LOG(INFO) << "test" ;
    
    ///On lance la boucle de jeu tant qu'on ne demande pas de quitter 
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

