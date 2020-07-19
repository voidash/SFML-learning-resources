#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Game{
    public:
        //this is to prevent copying. non copyable.  delete tells compiler to explicitly prevent creation of default constructors
        
        Game(const Game&) = delete;
        Game& operator=(const Game&)=delete;

        Game();
        void run();
        enum P{
            africa,
            asia
        };
    private:
        void processEvents();
        void update();
        void render();

        sf::RenderWindow _window;
        sf::CircleShape _player;
};
