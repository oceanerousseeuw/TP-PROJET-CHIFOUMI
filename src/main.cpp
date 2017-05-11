#include <iostream>
#include <glog/logging.h>
#include "game.hpp"

int main() {
    google::InitGoogleLogging("log_chifoumi");
    google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
    std::string texte = "Hello world !";
    std::cout << texte << std::endl;
    LOG(INFO) << "test" ;

    std::string move;
    std::cout << "move (pierre, feuille, ciseaux, quit):";
    std::cin >> move;
    game g;
    if (move == "quit"){
    std::cout << "Au revoir !" << std::endl;
    }else{
    g.play(move);
    }
    
    return 0;
}

