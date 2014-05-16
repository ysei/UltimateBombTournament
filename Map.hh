#ifndef MAP_HH_
#define MAP_HH_

#include "UltimateBombTournament.hh"

class	Map
{
public:

  Map(std::string titreFenetre, int largeurFenetre, int hauteurFenetre);
  ~Map();

  bool	initWindow();
  bool	initGL();
  void	loopGame();

private:
  
  std::string	_title;
  int		_windowY;
  int		_windowX;
  SDL_Window*	_window;
  SDL_GLContext	_contexteOpenGL;
  SDL_Event	_events;
  bool		_running;
  glm::mat4	_projection;
  glm::mat4	_modelView;
};

#endif

