library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
library std;
use standard.all;

entity questao1 is
port(
    A, B : IN BIT;
    X : OUT BIT;
     );
end questao1;

architecture q1 of questao1 is
Begin
   X <= NOT(A OR B);
end q1;