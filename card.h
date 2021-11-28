//card.h
//Author Henry Chadban, November 2021
//Email HenryJChadban@gmail.com

#ifndef CARD_H
#define CARD_H

//dependencies
#include <string>


//----------------------------------------------------------------
//Interface of the Card class
//Card class is a representation of standard playing cards
//Card has a value and a suit
//Jokers are represented as being of suit Joker

//----------------------------------------------------------------
class Card
{
    public:
    //----------------------------------------------------------------
        //Enums
        
        //Represents the Suit of the Card
        enum Suit
        {
        Diamonds,
        Hearts,
        Clubs,
        Spades,
        Joker 
        };

        //Represents the value(name) of the card, jokers are considered to have a value of zero
        enum Value
        {
            joker,
            ace,
            two,
            three,
            four,
            five,
            six,
            seven,
            eight,
            nine,
            jack,
            queen,
            king
        };
    //Static const variables
    //const is used to prevent modification, static so it can be stored only once
    //note initalisation occurs immediately after class definition
    //used to store lists of names of Suits and Values
    
    static const std::string _Csuits[];
    static const std::string _Cvalues[];

    //----------------------------------------------------------------
        //Public Functions

        //Constructor for the Card
        Card(Suit my_suit, Value my_value);
        //Destructor for the Card
        ~Card();
        //Getters
        Suit ProvideSuit();
        Value ProvideValue();
        //function prints the cards name
        void PrintName();
    //There are no setters, a card never has its value changed after creation

    private:
    //----------------------------------------------------------------
        //Private Functions, these are used only for error handling
        //warns the user they have setup the Joker class incorrectly
        void JokerError();
        //prints the cards suit and house, used for debugging if card name invalid
        void PrintNameError();

        //Private Member Variables
        //represent the type of the card
        Suit _my_suit;
        Value _my_value;
};

#endif