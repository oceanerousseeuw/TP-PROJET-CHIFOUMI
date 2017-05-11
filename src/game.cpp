#include <time.h>
#include "game.hpp"

std::string game::getLastResult(){
  return _lastResult;
}

std::string game::getLastAiMove(){
  return _lastAiMove;
}

void game::play(std::string move){
  do{
    std::string AiMove;
    int ai;
    ai = rand() % 3;
    switch(ai){
    case 0:
      AiMove = "pierre";
      break;
    case 1:
      AiMove = "feuille";
      break;
    case 2:
      AiMove = "ciseaux";
      break;
    }

    //egalite
    if(AiMove == move){
      std::cout << move << " - " << AiMove << " : égalité" << std::endl;
    }
    
    //utilisateur gagne
    if( move == "feuille" && AiMove == "pierre" ){
      std::cout << move << " - " << AiMove << " : gagné" << std::endl;
    }
    if( move == "ciseaux" && AiMove == "feuille" ){
      std::cout << move << " - " << AiMove << " : gagné" << std::endl;
    }
    if( move == "pierre" && AiMove == "ciseaux" ){
      std::cout << move << " - " << AiMove << " : gagné" << std::endl;
    }
    
    //utilisateur perd
    if( move == "pierre" && AiMove == "feuille" ){
      std::cout << move << " - " << AiMove << " : perdu" << std::endl;
    }
    if( move == "ciseaux" && AiMove == "pierre" ){
      std::cout << move << " - " << AiMove << " : perdu" << std::endl;
    }
    if( move == "feuille" && AiMove == "ciseaux" ){
      std::cout << move << " - " << AiMove << " : perdu" << std::endl;
    }
    
    std::cout << "move (pierre, feuille, ciseaux, quit):";
    std::cin >> move; 
    
  }while(move!="quit");

  if (move == "quit"){
    std::cout << "Au revoir !" << std::endl;
  }
}
