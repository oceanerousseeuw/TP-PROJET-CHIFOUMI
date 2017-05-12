#include "game.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupGame) { };

TEST(GroupGame, testGame1){
  game g;
  int cpt = 0;
  int nbPierre = 0;
  int nbFeuille = 0;
  int nbCiseaux = 0;
  while(cpt <= 1000){
    cpt++;
    g.play("pierre");
    if(g.getLastAiMove() == "pierre"){
      nbPierre++;
    }
    if(g.getLastAiMove() == "feuille"){
      nbFeuille++;
    }
    if(g.getLastAiMove() == "ciseaux"){
      nbCiseaux++;
    }
  }
  g.play("quit");
  std::cout << nbPierre << " " << nbFeuille << " " << nbCiseaux;
  CHECK(nbPierre >= 300 && nbPierre <= 350); 
  CHECK(nbFeuille >= 300 && nbFeuille <= 350);
  CHECK(nbCiseaux >= 300 && nbCiseaux <= 350);
}
