// my_algorithm.h
#ifndef MY_ALGORITHM_H_
#define MY_ALGORITHM_H_

namespace algo {
   
int  fora(int m,int g){ // for fora(start,stop)
     for(int i = m; i <= g; i++){
       std::cout << i << " ";
     } 
     return g;
}

int  whilea(int m,int g){ // while  whilea(start,stop)
    int i = m;
    while(i < 10){
        std::cout << i << " ";
        i++;
    }
    return g;
}

void ifastring(std::string kosul,std::string kosul1,
std::string ciktid, std::string ciktiy){  // if ifastring(condition_one, condition_two, true,false) just for string
  if(kosul == kosul1){
    std::cout << ciktid << std::endl;
  }
  else{
    std::cout << ciktiy << std::endl;
  }
}
void ifainteger(int kosul,int kosul1,std::string ciktid,std::string ciktiy){ // if ifainteger(condition_one, condition_two,true,false) just for integer
  if(kosul == kosul1){
    std::cout << ciktid << std::endl;
  }
  else{
    std::cout << ciktiy << std::endl;
  }
}

}

#endif