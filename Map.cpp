#include "Map.hh"

// Constructeur de Destucteur

Map::Map(std::string title, int windowX, int windowY)
{
  _title = title;
  _windowX = windowX;
  _windowY = windowY;
  _running = true;
}


Map::~Map()
{
    SDL_GL_DeleteContext(_contexteOpenGL);
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

bool	Map::initWindow()
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      std::cout << "Erreur lors de l'initialisation de la SDL : " << SDL_GetError() << std::endl;
      SDL_Quit();
      return false;
    }
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    _window = SDL_CreateWindow(_title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			       _windowX, _windowY, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    if (_window == 0)
    {
        std::cout << "Erreur lors de la creation de la fenetre : " << SDL_GetError() << std::endl;
        SDL_Quit();
        return false;
    }
    _contexteOpenGL = SDL_GL_CreateContext(_window);
    if (_contexteOpenGL == 0)
      {
        std::cout << SDL_GetError() << std::endl;
        SDL_DestroyWindow(_window);
        SDL_Quit();
        return false;
      }
    return true;
}

bool	Map::initGL()
{
  glEnable(GL_DEPTH_TEST);
  return true;
}


void	Map::loopGame()
{
    unsigned int frameRate (1000 / 50);
    Uint32 debutBoucle(0), finBoucle(0), tempsEcoule(0);
    _projection = glm::perspective(70.0, (double) _windowX / _windowY, 1.0, 100.0);
    _modelView = glm::mat4(1.0);
    Cube cube(2.0, "Shaders/couleur3D.vert", "Shaders/couleur3D.frag");
    float angle(0.0);
    while(_running)
      {
        debutBoucle = SDL_GetTicks();
        SDL_PollEvent(&_events);
        if(_events.window.event == SDL_WINDOWEVENT_CLOSE)
            _running = false;
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	_modelView = glm::lookAt(glm::vec3(3, 3, 3), glm::vec3(0, 0, 0), glm::vec3(0, 1, 0));
	angle += 4.0;
        if(angle >= 360.0)
	  angle -= 360.0;
	_modelView = glm::rotate(_modelView, angle, glm::vec3(0, 1, 0));
	cube.afficher(_projection, _modelView);
	SDL_GL_SwapWindow(_window);
	finBoucle = SDL_GetTicks();
        tempsEcoule = finBoucle - debutBoucle;
	if(tempsEcoule < frameRate)
            SDL_Delay(frameRate - tempsEcoule);
    }
}
