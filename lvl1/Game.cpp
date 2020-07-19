#include "Game.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>

Game::Game() : _window(sf::VideoMode(800,600)/* video mode is part of window module. */,"SFML project 1 to try"), _player(150)
{
    _player.setFillColor(sf::Color::Blue);
    _player.setPosition(10,20);
}

void Game::run()
{
    while(_window.isOpen())
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents(){
    sf::Event event; //part of window.hpp
    while(_window.pollEvent(event)) { //poll event pops the top most event on event stack
        if((event.type == sf::Event::Closed) //type is enumerator type 
        /*
            LINE_COMMENT 2020-07-19 
            enum EventType {
                closed,
                Resized,
                LostFocus,
                KeyPressed...
            }

            EventType type;
            

            sf::Event::EventType::Closed not necessary
            sf::Event::Closed works just as well
        */
        or ((event.type == sf::Event::KeyPressed) and (event.key.code == sf::Keyboard::Escape))) {
            _window.close();
            /*
                Anonymous unions 

                key is part of anonymous unions
                so direct access is possible.

                KeyPressed is a struct 
                KeyPressed key

                sf::keyboard code;
            */

        }
    }
}

void Game::update(){

}

void Game::render(){

    _window.clear();
    _window.draw(_player);
    _window.display();

}