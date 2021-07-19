/** @file Individu.hh
 *  @brief Especificació de la classe Individu
*/
#ifndef CLASS_Individu_HH
#define CLASS_Individu_HH

#include <iostream>
#include <set>
#include "Cjt_PCr.hh"
using namespace std;

/** @class Individu
 *  @brief Representa un Individu amb els seus Parells de Cromosomes i tots els trets que té 
 */
 class Individu{
 

private:
     
     Cjt_PCr c;
     set<string> st;
 
public:
    
    /** @brief Creadora per defecte
     * \pre <em>cert</em>
     * \post El resultat és un Individu amb valor c=0 i un set de trets buit
     */
    Individu ();
    
    //Modificadores
    
    /** @brief Modificadora que afegeix un tret a l'Individu
     * \pre El paràmetre implícit no té el tret
     * \post El paràmetre implícit passa a tenir el tret t i se li afegeix a st en cas que no el tingues, sino s'escriura "error"
     */
    
    void afegir_tret(const string& t);
    
    /** @brief Modificadora que treu un tret a l'Individu 
     * \pre El paràmetre implícit té el tret t
     * \post El pàrametre implícit ja no té el tret t en cas que el tinguès abans, si no el tenia s'escriurà "error"
     */
    void treure_tret(const string& t);
    
    //Consultores
    
    /** @brief Consultora dels cromosomes d'Individu
     * \pre <em>cert</em>
     * \post El resultat és la combinació de parells de cromosomes del paràmetre implícit
     */   
    Cjt_PCr retorna_cromo();
    
    /** @brief Consultora que retorna si l'individu té el tret
     * \pre <em>cert</em>
     * \post El resultat retorna si l'individu té el tret t
     */
    bool te_tret(const string& t);
    
    //Lectura i escriptura
    
    /** @brief Operació de lectura
     * \pre Hi ha preparats al canal estàndard d'entrada una seqüència d'enters 
     * \post El paràmetre implícit passa a tenir els atributs llegits del canal estàndard d'entrada
     */    
    void llegir_cromo(int m);
    
    /** @brief Operació d'escriptura
     * \pre <em>cert</em>
     * \post S'han escrit els atributs del paràmetre implícit en el canal estàndard de sortida
     */
    void imprimir();
     
};

#endif
 

