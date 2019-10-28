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

std::string format(std::string filename){
  std::ifstream fin(filename);
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string line = "";
    std::string prog = "";
    while(std::getline(fin,line)){
        prog += removeLeadingSpaces(line) + "\n";
    }
    fin.close();
    int lines = countChar(prog, '\n');
    std::string program[lines];
    int index = 0;
    int i;
    int stop = 0;
    for(i=0;i<prog.length(); i++){
      if(prog[i] == '\n'){
        program[index] = prog.substr(stop, i-stop);
        stop = i+1;
        index++;
      }
    }
    int braces = 0;
    std::string ret ="";
    for(i =0;i<lines;i++){
      int y= 0;
      if(program[i][0] == '}' )y++;
      while (y < braces){
        ret+="\t";
        y++;
      }
      ret+= program[i]+ "\n";
      braces += countChar(program[i], '{') - countChar(program[i], '}');
    }
    return ret;
}
