#include<stdlib.h>
int i;
program Main( )
{
i = 10;
call f ( );
}
procedure f( )
{
int i = 20;
call g ( );
}
procedure g( )
{
print i;
}
