#include "funcs.h"



std::string removeLeadingSpaces(std::string line){
  std::string ret = "";
  int i;
  for (i = 0; i < line.length() ; i++){
    if(!std::isspace(line[i])) {
      ret += line.substr(i);
      break;
    }
  }
  return ret;
}

int countChar(std::string line, char c){
  int ret= 0;
  int i;
  for (i = 0; i < line.length() ; i++){
    if(line[i] == c) ret++;
  }
  return ret;
}
