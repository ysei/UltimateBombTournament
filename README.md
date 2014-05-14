SOMMAIRE

PARTIE 1 : Le jeu
      Présentation
      Gameplay
      Personnages
      Bonus

PARTIE 2 : Le Developpement
       Introduction
       Gameplay
	   Deplacement
  	   Bonus
       Musique

------------------------------------

	PARTIE 1 : Le jeu

Présentation.

Ultimate Bomb Tournament est un jeu inspiré de Bomberman Génération sorti sur Gamecube développé par Nintendo.
Dans celui-ci vous pourrez incarner votré héro favori de Nintendo et vous battre contre vos ennemi dans une arène.

GamePlay.

Dans une arène 4 personnages se battrons pour rester le dernier debout. Le but sera de poser des bombes pour vous frayer un chemin dans le labyrinthe et coincer vos ennemis pour les tuer.
Au début du jeu vous serez placer dans un des 4 coins avec une bombe de puissance 1. Tout au long de la parti vous pourrez détruire certain mur pour créer un passage et rejoindre vos ennemis. En cassant ces mur vous pourrez gagner des bonus aui augenterons vos aptitude au combat.

Personnages.

Avant que la partie commence vous devrez séléctionner votre personnage et ainsi le controler. Vous aurez le choix entre :
      - Mario
      - Luigi
      - Toad
      - Bowser
      - Donkey Kong	
      - Link
      - Kirby

Bonus.

Vous aurez la possibilité de ramasser 4 bonus différents :
     - Bonus de puissance, qui augmente la puissance de vos bombe de 1
     - Un stock de bombe en plus, qui vous permet de poser 1 bombe en plus.
     - Un bonus de vitesse, qui augmente votre vitesse de 1 unité
     - Une maladie, qui change les caracteristique de votre personnage 
       	   -> Deplacement beaucoup plus lent/rapide
	   -> Touche inversé
	   -> Incapacité de poser une bombe
	   -> Vos bombe explose plus rapidement/lentement


	   PARTIE 2 : Le développement

Introduction.

Vu qu'on a pas la capacité de faire une cinématique et que de toute facon ca ne sert presque à rien, je propose qu'on arrive a trouver une musique qui aille bien avec les combats. Qu'on film une partie que l'on joue, qu'on floute le tout et qu'on mette par dessus le nom du jeu + Appuyer sur X pour jouer.
Ca envois ensuite sur la séléction du personnage.
Ensuite on a la selection de la map (différent skin)
Et on joue !

Gameplay.

Le joueur aura le choix de jouer au clavier ou a la mannette. 
   -> Au clavier il se deplacera avec les fleches et posera une bombe avec ESPACE. Il pourra faire pause avec Echap.
   -> A la manette il se deplacera avec le joystick et/ou les fleches. Il pausera les bombes avec A et mettra en pause avec START.
Un joueur ne se deplace pas case par case, c'est seulement les bombes qui sont posé case par case. Un joueur est compté dans une case si 15% de sont pied s'y trouve (Je dis un truc au pif faudra faire des tests)

Je propose que la map est généré via un fichier texte par qui contiendra certain chiffre selon ce que l'on veut. Par exemple une map de 15 x 13:

XXXXXXXXXXXXXXX
X1 BBBBBB B  2X
X XBXBX X X X X
XBB BB B BBBBBX
X X XBX XBX XBX
XBBBBBBBBBBBBBX
X XBXBXBX XBX X
XBBB  BB BBBB X
XBXBX XBXBX X X
X BB BB  B BBBX
X XBX XBXBXBX X
X4 B BBB BBB 3X
XXXXXXXXXXXXXXX

Légende :

1, 2, 3, 4 : Personnages
X : Bloc indestructibles
B : Bloc destructibles

Grace a celui-ci on peut facilement générer la map. Car on sait ou est quoi. De plus on peut faire un systeme de sauvegarde. C'est a dire que si le joueur faire une sauvegarde on met dans un fichie texte la map actuel. Comme ca on peut reprendre en cours une partie car on a tous ce dont on a besoin.
Je propose de mettre un timer de 3s avant que la partie se lance. (3, 2, 1, JOUEZ !)

Ensuite pour les bonus. De base on a 1 bombe d'une puissance de 1. C'est a dire qu'elle va exploser a 1 case du centre (seulement vers le haut, bas, droite et gauche)

Force 1 :   Force 2 :
      	      E
 E            E
EBE         EEBEE
 E            E
              E

Légende :

E : Explosion de la bombe
B : Position de la bombe

Le personnage va a une vitesse d'unité 1 (on verra en testant je pense) des qu'il prend un bonus vitesse on peut dire qu'on multiplie sa vitesse par 1.5 (par exemple)
Prendre un bonus de puissance augmente sa force de 1
Prendre un bonus de stock augmente le stock de 1
Maladies : 
 -> Elles durent 30s
 -> Ca desaventage le joueur qui marche dessus

Un bonus est un objet au sol de la taille d'une case. Si une bombe explose et que l'explosion devrait detruire un bloc a la place d'un bonus celui-ci est détruit.

Musiques:

La musique que le joueur entendra sera en fonction du personnage qu'il a choisis.