//card.cpp
//Author Henry Chadban, November 2021
//Email HenryJChadban@gmail.com

//dependencies
#include "card.h" //interface definition
#include <iostream> //for std:cerr

//----------------------------------------------------------------
//Implementation of the Card Class



const std::string Card::_Csuits[5] = 
{
    "Diamonds",
    "Hearts",
    "Clubs",
    "Spades",
    "Joker" 
};

const std::string Card::_Cvalues[14] = 
{
    "Invalid",
    "Ace",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Jack",
    "Queen",
    "King"
};

//----------------------------------------------------------------
//Constructor for the Card
Card::Card(Suit my_suit, Value my_value)
{
    //set the value of the card
    _my_suit = my_suit;
    _my_value = my_value;    
    //check to ensure that all Jokers are of both Suit Joker and value joker
    //print a warning and coerce the output into the correct form if above condition not met
    if(_my_suit==Card::Joker && _my_value!=Card::joker)
    {
        //warn the user of their mistake
        JokerError();
        //coerce the card to be a Joker
        _my_value = Card::joker;
        
    }
    else if(_my_suit!=Card::Joker && _my_value==Card::joker )
    {        
        //warn the user of their mistake
        JokerError();
        //coerce the card to be a Joker
        _my_suit = Card::Joker;
    }
    //initalisation complete
    return;
}

//----------------------------------------------------------------
//Destructor for the Card
Card::~Card()
{
    //empty destructor 
}

//----------------------------------------------------------------
Card::Suit Card::ProvideSuit()
{
    return _my_suit;
}

//----------------------------------------------------------------
Card::Value  Card::ProvideValue()
{
    return _my_value;
}

//----------------------------------------------------------------
void Card::PrintName()
{
    //if card is a valid Joker
    if(_my_suit==Card::Joker && _my_value==Card::joker)
    {
        std::cout << _Csuits[_my_suit];   
    }
    else
    {
        std::cout << _Cvalues[_my_value] << " of "<< _Csuits[_my_suit];
    }
    return;
}

//----------------------------------------------------------------
void Card::JokerError()
{
    //warn the user they have setup the Joker incorrectly
    std::cerr << "CARD CONSTRUCTOR: WARNING!, Jokers must be of both suit Joker and value joker" << std::endl;
    //provide details of invalid cars suit and house
    PrintNameError();
    std::cerr << "CARD COERCED TO CORRECT JOKER STATUS" << std::endl;  
    return;  
}

//----------------------------------------------------------------
void Card::PrintNameError()
{
   std::cerr << "SUIT ID = " << _my_suit << " SUIT NAME = " << _Csuits[_my_suit] << std::endl;
   std::cerr << "VALUE ID = " << _my_value << " VALUE NAME = " << _Cvalues[_my_value] << std::endl;
   return;  
}


