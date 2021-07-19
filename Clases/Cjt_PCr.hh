/** @file Cjt_PCr.hh
 *  @brief Especificació de la classe Tret
 */
#ifndef CLASS_Cjt_PCr_HH
#define CLASS_Cjt_PCr_HH

#include <iostream>
#include <vector>
using namespace std;

/** @class Cjt_PCr
 *  @brief Representa un conjunt de parells de cromosomes
 */
class Cjt_PCr{

private:
    vector<char> vP; 
    vector<char> vS; 
public:
    
    //Constructora
    
    /** @brief Creadora per defecte
     * \pre <em>cert</em>
     * \post El resultat són els parells de cromosomes amb els dos vectors vP i vS 
     */
    Cjt_PCr();
    
    //Modificadores
    
    /** @brief Modificador que calcula la interseccio de cromosomes de dos individus
     * \pre El paràmetre implícit té com a conjunt de parells de cromosomes la del tret
     * \post El paràmetre implícit té com a conjunt de parells de cromosomes  la interseccio entre els anteriors i els nous que li entren com a referència
     */
    void interseccio(Cjt_PCr c2);
    
    //Lectura i escriptura
    
    /** @brief Operació de lectura
     * \pre Hi ha preparats al canal estàndard d'entrada una seqüència d'enters
     * \post El paràmetre implícit passa a tenir els atributs llegits al canal estàndard d'entrada
     */
    void llegir_parells(int mida);
    
    /** @brief Operació d'escriptura
     * \pre <em>cert</em>
     * \post S'han escrit els atributs del paràmetre implícit en el canal estàndard de sortida
     */
    void imprimir();
};

#endif

