/**
   @file coordonnes.h
   @brief  Définit les coordonnées atomiques du terrain et ses accesseurs
*/

#ifndef _COORDONNEES
#define _COORDONNEES


/** @struct Coordonnes
 *  @brief Structure definissant des coordonnees en deux dimension (pour des entitées)
 *  @var coordonnees::xCoord
 *  Position sur l'axe des X
  * @var coordonnees::yCoor
 *  Position sur l'axe des Y
 */
typedef struct Mcoordonnees{
    int xCoord;
    int yCoord;
} Coordonnees;


/**
	@brief Edition de xCoord et de yCoord dans la structure
	@param xCoord Valeur sur l'axe des x
	@param yCoord Valeur sur l'axe des y
	@param pCoord Pointeur sur la structure Coordonnees a editer
*/
void setXYcoord_Coord (int x, int y, Coordonnees * pCoord);
/**
	@brief Recupère xCoord
	@param pCoord Pointeur sur la structure Coordonnees a lire
	@return La valeur de xCoord
*/
int getXCoord_Coord(Coordonnees * pCoord);
/**
	@brief Recupère yCoord
	@param pCoord Pointeur sur la structure Coordonnees a lire
	@return La valeur de YCoord
*/
int getYCoord_Coord(Coordonnees * pCoord);

/**
	@brief Retourne la distance entre deux Coordonnees
	@param coord1 Coordonnees de la premier entitée
	@param coord2 Coordonnees de la seconde entitée
	@return float représentant la distance entre ses deux coordonnées
*/
float distanceEntreDeuxCoordonnees_Coord (Coordonnees * coord1, Coordonnees * coord2);

/**
	@brief Vérifie si deux Coordonnees donné sont identiques.
	@param coord1 Coordonnees de la premier entitée
	@param coord2 Coordonnees de la seconde entitée
	@return Retourne 1 si elles sont identique, 0 sinon
*/
int sontEgale_Coord (Coordonnees * coord1, Coordonnees * coord2);


#endif
