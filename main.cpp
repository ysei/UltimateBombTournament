#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/OpenGL.hpp>
#include <GL3/gl3.h>
      
int main()
{
  bool running = true;
  sf::Event event;
  sf::ContextSettings settings;

  settings.depthBits = 32;
  settings.majorVersion = 3;
  settings.minorVersion = 3;
     
  sf::RenderWindow window(sf::VideoMode(800, 600), "OpenGL", sf::Style::Default, settings);    

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
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
      glPushMatrix();
      glBegin(GL_TRIANGLES);                 // Drawing Using Triangles
      glVertex3f( 0, 1, 0);                  // Top
      glVertex3f(-1,-1, 0);                  // Bottom Left
      glVertex3f( 1,-1, 0);                  // Bottom Right
      glEnd();
      glPopMatrix();
      glFlush();
      window.display();
    }
  return 0;     
}

