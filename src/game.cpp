#include <time.h>
#include "game.hpp"

std::string game::getLastResult(){
  return _lastResult;
}

std::string game::getLastAiMove(){
  return _lastAiMove;
}

void game::play(std::string move){
  int cpt = 0;
  /*
  int nbPierre = 0;
  int nbFeuille = 0;
  int nbCiseaux = 0;
  */
  //while (cpt <= 21){ 
  do{
    //cpt++;
    std::string AiMove;
    int ai;
    ai = rand() % 3;
    switch(ai){
    case 0:
      AiMove = "pierre";
      _lastAiMove = "pierre";
      break;
    case 1:
      AiMove = "feuille";
      _lastAiMove = "feuille";
      break;
    case 2:
      AiMove = "ciseaux";
      _lastAiMove = "ciseaux";
      break;
    }


    //egalite
    if(AiMove == move){
      std::cout << move << " - " << AiMove << " : égalité" << std::endl;
      _lastResult = "égalité";
      //if(AiMove == "pierre") nbPierre++;
      //if(AiMove == "feuille") nbFeuille++;
      //if(AiMove == "ciseaux") nbCiseaux++;
    }
    
    //utilisateur gagne
    if( move == "feuille" && AiMove == "pierre" ){
      std::cout << move << " - " << AiMove << " : gagné" << std::endl;
      _lastResult = "gagné";
      //nbPierre++;
    }
    if( move == "ciseaux" && AiMove == "feuille" ){
      std::cout << move << " - " << AiMove << " : gagné" << std::endl;
      _lastResult = "gagné";
      //nbFeuille++;
    }
    if( move == "pierre" && AiMove == "ciseaux" ){
      std::cout << move << " - " << AiMove << " : gagné" << std::endl;
      _lastResult = "gagné";
      //nbCiseaux++;
    }
    
    //utilisateur perd
    if( move == "pierre" && AiMove == "feuille" ){
      std::cout << move << " - " << AiMove << " : perdu" << std::endl;
      _lastResult = "perdu";
      //nbFeuille++;
    }
    if( move == "ciseaux" && AiMove == "pierre" ){
      std::cout << move << " - " << AiMove << " : perdu" << std::endl;
      _lastResult = "perdu";
      //nbPierre++;
    }
    if( move == "feuille" && AiMove == "ciseaux" ){
      std::cout << move << " - " << AiMove << " : perdu" << std::endl;
      _lastResult = "perdu";
      //nbCiseaux++;
    }
    
    std::cout << "move (pierre, feuille, ciseaux, quit):";
    std::cin >> move;
    
  }while(move!="quit");
  //}
  if (move == "quit"){
    //std::cout << nbPierre << " " << nbFeuille << " " << nbCiseaux << std::endl;
    std::cout << "Au revoir !" << std::endl;
  }
}
