//euchre_main.cpp
//Main file for the Euchre Project
//Author Henry Chadban, November 2021
//Email HenryJChadban@gmail.com

//dependencies
#include "card.h"
#include <iostream>

int main(void)
{
    Card card1(Card::Diamonds,Card::eight);
    Card card2(Card::Hearts,Card::king);
    Card card3(Card::Clubs,Card::ace);
    Card card4(Card::Joker,Card::joker);
    Card card5(Card::Clubs,Card::ace);
    Card card6(Card::Joker,Card::queen);
    Card card7(Card::Spades, Card::joker);
    card1.PrintName();
    card2.PrintName();    
    card3.PrintName();
    card4.PrintName();
    card5.PrintName();
    card6.PrintName();
    card7.PrintName();               
    return 0;
}
