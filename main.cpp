#include <iostream>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/OpenGL.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>
 
int                     main()
{
  bool                  running = true;
  float                 vertices[] = {-0.5, -0.5,   0.0, 0.5,   0.5, -0.5};
  sf::Event             event;
  sf::ContextSettings   settings;
  sf::RenderWindow      window(sf::VideoMode(900,900), "OpenGL", sf::Style::Close, sf::ContextSettings(32));
  sf::Shader            shader;
  
  window.setVerticalSyncEnabled(true);


      glClearDepth(10);
      glClearColor(0, 0, 0, 0);

      glEnable(GL_DEPTH_TEST);
      glDepthMask(GL_TRUE);

      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      gluPerspective(90, 1, 1, 500);

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
      glBegin(GL_QUADS);

      glVertex3f(-1, -1, -1);
      glVertex3f(-1,  1, -1);
      glVertex3f( 1,  1, -1);
      glVertex3f( 1, -1, -1);

      glEnd();

      window.display();


    }
  return 0;
}
