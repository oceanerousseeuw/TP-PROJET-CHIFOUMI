#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>

class game{
private:
  std::string _lastResult;
  std::string _lastAiMove;

public:
  
  void play(std::string move);

  std::string getLastResult();

  std::string getLastAiMove();

};

#endif
