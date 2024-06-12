#pragma once
#include "Node.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
/**
* Reprezentacia binarneho stromu.
* Implementacia metod na najdenie vzdialenosti medzi uzlami stromu.
*/
class BinaryTree
{
private:
	int ans;///< premenna pre ukladanie medzivysledkov a vysledkov pocas vypoctu vzdialenosti.
	/**
	* Rekurzivne funkcia na hladanie vzdialenosti medzi dvomi uzlami v binarnom strome.
	* 
	* @param root Aktualny prehladavany uzol.
	* 
	* @param n1 Hodnota prveho uzlu.
	* 
	* @param n2 Hodnota druheho uzlu.
	* 
	* @return Vzdialenost medzi dvomi uvedenymi uzlami.
	*/
	int _findDistance(Node* root, int n1, int n2);
	/**
	* Funckia na kontrolovanie, ci cielova hodnota existuje v binarnom strome.
	* 
	* @param root Aktualny prehladavany uzol.
	* 
	* @param target Hodnota, ktora sa hldada v strome.
	* 
	* @return "true" , pokial je target najdeny v strome , inak "false".
	*/
	bool isNodeInTree(Node* root, int target);
public: 
	Node* root;///< Koren binarneho stromu.
	/**
	 * Konstruktor triedy BinaryTree.
	 *
	 * Inicializuje binarny strom s jednym korenovym uzlom obsahujuci zadanu hodnotu.
	 *
	 * @param key Hodnota pre nastavenie korenoveho uzlu stromu.
	 */
	BinaryTree(int key);
	/**
	* Funckia pre hladanie vzdialenosti medzi dvomi uzlami s danymi hodnotami.
	*
	* @param n1 Hodnota prveho uzlu.
	* 
	* @param n2 Hodnota druheho uzlu.
	*
	* @return Vzdialenost medzi dvomi danymi uzlami.
	*/
	int findDistance(int n1, int n2);
	/**
	 * Funckia pre vypis vzdialenosti od uzlu ku vsetkym ostatnym uzlom v binarnom strome.
	 *
	 * @param source Hodnota uzlu pre ktory hladame vzdialenosti ostatnych uzlov.
	 */
	void printDistances(int source);
};

