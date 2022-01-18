# RDP Parser

## Parsing the grammar of calculator and checking if input string is accepted

Grammar Used
  * G = {V,T,P,calculation}
  * V = {E,V,N,U,D,S,O}
  * T = {+,-,0,1,2,3,4,5,6,7,8,9}
  * calculation = {C}


The following productions were used :
  1. C -> E=
  2. E -> V | VOE
  3. V -> N | SN
  4. N -> U | U.U
  5. U -> D | DU
  6. D -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
  7. S -> + | -
  8. O -> + | - | * | / 
