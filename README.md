# RDP Parser

## Parsing the grammar of calculator and checking if input string is accepted

Grammar Used
  * G = {V,T,P,calculation}
  * V = {E,V,N,U,D,S,O}
  * T = {+,-,0,1,2,3,4,5,6,7,8,9}
  * calculation = {C}


The following productions were used :
  C -> E=
  E -> V | VOE
  V -> N | SN
  N -> U | U.U
  U -> D | DU
  D -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
  S -> + | -
  O -> + | - | * | / 
