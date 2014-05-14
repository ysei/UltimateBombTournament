#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/OpenGL.hpp>

int			main()
{
  bool			running = true;
  sf::Event		event;
  sf::ContextSettings	settings;
  sf::RenderWindow	window(sf::VideoMode(500, 500), "OpenGL", sf::Style::Default, sf::ContextSettings(32));
  sf::Font		font;
  sf::Text		text;

  settings.majorVersion = 3;
  settings.minorVersion = 3;
  if (!font.loadFromFile("Font/arial.ttf"))
    std::cerr << "Error Upload Font" << std::endl;
  text.setFont(font);
  text.setString("Ultimate Bomb Tournament");
  text.setCharacterSize(30);
  text.setColor(sf::Color::White);
  window.setVerticalSyncEnabled(true);
  while (running)
    {
      window.clear();
      while (window.pollEvent(event))
	{
	  if (event.type == sf::Event::Closed ||
	      sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	    running = false;
	  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	    {
	      std::cout << "Space pressed" << std::endl;
	    }
	}
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
      window.draw(text);
      window.display();
    }
  return 0;
}

