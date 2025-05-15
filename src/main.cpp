#include <SFML/Graphics.hpp>
#include <iostream> // Para mensajes de error

// Si ya tienes Ataque.h, inclúyelo, aunque no lo uses aún
// #include "Ataque.h" // Asegúrate de que está en include/Ataque.h

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pokemon C++ SFML");
    window.setFramerateLimit(60);

    // Intenta cargar la fuente desde la carpeta assets
    sf::Font font;
    if (!font.loadFromFile("assets/fonts/Pokemon_Hollow.ttf")) { 
        std::cerr << "Error al cargar la fuente desde assets/fonts/" << std::endl;
        return 1;
    }
    std::cout << "Fuente cargada correctamente!" << std::endl;


    sf::Text testText("Kuilmer Hernandez!", font, 30);
    testText.setPosition(10, 10);
    testText.setFillColor(sf::Color::White);


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Blue);
        window.draw(testText); // Dibuja el texto de prueba
        window.display();
    }

    return 0;
}
