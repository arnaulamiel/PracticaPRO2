/** @file BinTreeIOint.hh 
 *  @brief Especificaci� de BinTreeIOint.hh
 */
#ifndef CLASS_BINTREEIOINT_HH
#define CLASS_BINTREEIOINT_HH

#include <iostream>
#include "BinTree.hh"
using namespace std;
// Lectura d'un arbre binari d'enters, acci�.  Els elements 
// s'introdueixen en preordre: primer l'arrel, despr�s el subarbre
// esquerre i per �ltim el dret. Els arbres buits es
// representen amb la marca.

/** @brief Operaci� de lectura
 * \pre a es buit; el canal est�ndard d'entrada cont� el recorregut en preordre
   d'un arbre binari A d'enters
 * \post a = A
 */
void read_bintree_int(BinTree<int>& a, int marca);  

/** @brief Operaci� d'escriptura
 * \pre a = A
 * \post El canal est�ndard de sortida cont� el recorregut en inordre d'a, a =  A
 */
void write_bintree_int(const BinTree<int> &a); 

#endif
