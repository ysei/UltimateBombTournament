#include "UltimateBombTournament.hh"

void	myError(std::string str)
{
  std::cout << str << std::endl;
  std::exit(0);
}

int	main()
{
  Map	map("Ultimate Bomb Tournament", 900, 900);

  if(map.initWindow() == false)
    myError("Eroor : Open Window");
  if(map.initGL() == false)
    myError("Error : Init OpenGL");
  map.loopGame();
  return 0;
}
