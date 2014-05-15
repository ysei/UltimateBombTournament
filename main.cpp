#include <iostream>
#include <GL/glew.h>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/OpenGL.hpp>
#include <GL3/gl3.h>

int                     main()
{
  sf::ContextSettings settings;
  settings.depthBits = 32;
  settings.majorVersion = 3;
  settings.minorVersion = 3;
  sf::RenderWindow window(sf::VideoMode(900,900), "OpenGL", sf::Style::Close, settings); 
  bool                  running = true;
  float                 vertices[] = {-0.5, -0.5, 0.0, 0.5, 0.5, -0.5};
  sf::Event             event;
  
  settings.majorVersion = 3;
  settings.minorVersion = 3;
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
      glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, vertices);
      glEnableVertexAttribArray(0);
      glDrawArrays(GL_TRIANGLES, 0, 3);
      glDisableVertexAttribArray(0);
      window.pushGLStates();
      window.popGLStates();
      window.display();
    }
  return 0;
}
