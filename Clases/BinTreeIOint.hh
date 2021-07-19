/** @file BinTreeIOint.hh 
 *  @brief Especificació de BinTreeIOint.hh
 */
#ifndef CLASS_BINTREEIOINT_HH
#define CLASS_BINTREEIOINT_HH

#include <iostream>
#include "BinTree.hh"
using namespace std;
// Lectura d'un arbre binari d'enters, acció.  Els elements 
// s'introdueixen en preordre: primer l'arrel, després el subarbre
// esquerre i per últim el dret. Els arbres buits es
// representen amb la marca.

/** @brief Operació de lectura
 * \pre a es buit; el canal estàndard d'entrada conté el recorregut en preordre
   d'un arbre binari A d'enters
 * \post a = A
 */
void read_bintree_int(BinTree<int>& a, int marca);  

/** @brief Operació d'escriptura
 * \pre a = A
 * \post El canal estàndard de sortida conté el recorregut en inordre d'a, a =  A
 */
void write_bintree_int(const BinTree<int> &a); 

#endif
