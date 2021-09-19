#include "fibo.h"



uint16_t fibo (uint16_t n){
  if (n==1 || n==2){
    return 1;
  }else{
    return fibo(n-1)+fibo(n-2);
  }
}
