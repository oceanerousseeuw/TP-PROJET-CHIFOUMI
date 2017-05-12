#include <iostream>
#include <glog/logging.h>
#include "game.hpp"

/*! \mainpage chifoumi
 * @author moi
 *
 * Un jeu petit mais puissant !
 */

int main(int argc, char ** argv) {
    google::InitGoogleLogging("log_chifoumi");
    google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
    std::string name;
    name = argv[1];

    ///On lance la boucle de jeu tant qu'on ne demande pas de quitter 
    std::string move;
    game g;
    do{
      std::cout << "move (pierre, feuille, ciseaux, quit):";
      std::cin >> move;
          
      g.play(move);

      if(move != "quit"){
	LOG(INFO) << name << ";" << g.getLastResult()
		  << ";" << move << ";" << g.getLastAiMove();
      }
      
      std::cout << move  << " - " << g.getLastAiMove()<< " : " <<g.getLastResult() << std::endl;
 
    }while (move != "quit");
    
    if (move == "quit"){
      std::cout << "Au revoir !" << std::endl;
    }
    
    return 0;
}

