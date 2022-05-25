#include "Card.h"

Card::Card()
{

}
Card::Card(int c)
{
	Cnumber = c;
}
void Card::setCnumber(int c)
{
	Cnumber = c;
}
int Card::getCnumber()
{
	return Cnumber;
}