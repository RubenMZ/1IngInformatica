#include "primo.h"

int primo(int num)
{
int i, contador, mod;

contador=0;

for(i=1; i<=num; i++)
{
mod=num%i;
	if(mod==0)
	{
	contador=(contador+1);
	}
	else
	{
	contador=contador;
	}
}


if(contador==2)
{
return 1;
}
else
{
return 0;
}
}
