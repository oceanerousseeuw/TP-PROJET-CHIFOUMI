#include <time.h>
#include "game.hpp"

std::string game::getLastResult(){
  /// permet de recuperer le resultat en privé
  return _lastResult;
}

std::string game::getLastAiMove(){
  /// permet de recuperer le mouvement de l'IA en privé
  return _lastAiMove;
}

void game::play(std::string move){
    std::string AiMove;
    int ai;
    /// on crée le mouvement de l'IA
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

    ///on compare le mouvement de l'IA et celui du joueur
    ///on affecte le dernier resultat de l'IA
    //egalite
    if(AiMove == move){
      _lastResult = "égalité";
    }
    
    //utilisateur gagne
    if( move == "feuille" && AiMove == "pierre" ){
      _lastResult = "gagné";
    }
    if( move == "ciseaux" && AiMove == "feuille" ){
      _lastResult = "gagné";
    }
    if( move == "pierre" && AiMove == "ciseaux" ){
      _lastResult = "gagné";
    }
    
    //utilisateur perd
    if( move == "pierre" && AiMove == "feuille" ){
      _lastResult = "perdu";
    }
    if( move == "ciseaux" && AiMove == "pierre" ){
      _lastResult = "perdu";
    }
    if( move == "feuille" && AiMove == "ciseaux" ){
      _lastResult = "perdu";
    }
}
