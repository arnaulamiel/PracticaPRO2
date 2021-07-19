/** @file Cjt_Individus.hh
 *  @brief Especificació de la classe Cjt_Individus
 */
#ifndef CLASS_Cjt_Individus_HH
#define CLASS_Cjt_Individus_HH
#include <iostream>
#include <vector>
#include "Individu.hh"
#include "BinTreeIOint.hh"

using namespace std;
/** @class Cjt_Individus
 *  @brief representa el conjunt d'individus i l'arbre que els relaciona segons els parentescs. */
class Cjt_Individus{
private:
     
    vector<Individu> vind;
    
    BinTree<int>arbre;
public:
    
    /** @brief Creadora per defecte
     * \pre <em>cert</em>
     * \post El resultat és un conjunt d'individus amb el vector i arbre buits
     */
    Cjt_Individus();
    
    //Modificadores
    
    /** @brief Modificadora que afegeix un tret a un individu
     * \pre El paràmetre implícit no té el tret t
     * \post El paràmetre implícit passa a tenir el tret t i se li afegeix a st en cas que no el tingues, sino s'escriura "error"
     */
    void afegir_tret(const string& t, int id);
    
    /** @brief Modificadora que treu un tret a l'Individu 
     * \pre El paràmetre implicit té el tret t
     * \post El pàrametre implicit ja no té el tret t en cas que el tinguès abans, si no el tenia s'escriurà "error"
     */
    void treure_tret(const string& t, int id);
    
    //Consultores
    
    /** @brief Consultora d'un individu
     * \pre <em>cert</em>, id és vàlid i existeix un individu amb identificador id
     * \post El resultat és un Individu 
     */   
    Individu retorna_individu(int id);
    
    /** @brief Consultora que retorna la distribució d'un tret
     * \pre <em>cert</em>
     * \post El resultat és l'arbre en inordre de la distribució del tret
     */
    BinTree<int> distribucio_arbre(const BinTree<int>& arbre, const string& t);
    

    //Lectura i escriptura
    
    /** @brief Operació de lectura
     * \pre Hi ha preparats al canal estàndard d'entrada dos enters 
     * \post El canal estandard conte n individus, cadascun amb un parell de cromosomes de tamany m.
     */
    void llegir(int n, int m);
    
    /** @brief  Operació d'escriptura
     * \pre <em>cert</em>
     * \post S'ha escrit el subarbre en inordre en el canal estàndard de sortida
     */
    void escriure_arbre_distribucio(const string& t);
    
    /** @brief  Operació d'escriptura
     * \pre <em>cert</em>
     * \post S'han escrit els atributs del paràmetre implícit en el canal estàndard de sortida
     */
    void consulta_individu(int id);
    
    
};
#endif
