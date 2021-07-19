/** @file Cjt_Trets.hh
 *  @brief Especificació de la classe Cjt_Trets
 */
#ifndef CLASS_Cjt_Trets_HH
#define CLASS_Cjt_Trets_HH

#include "Tret.hh"
#include "Cjt_Individus.hh"
#include "Individu.hh"
#include <map>

using namespace std;

/** @class Cjt_Trets
 *  @brief Representa un conjunt de trets
 */
class Cjt_Trets{

private:
    map<string,Tret> mapct;
public:
    
    //Modificadora
    
    /** @brief Modificadora que afegeix un nou tret al conjunt de trets
     * \pre El paràmetre implícit no té el tret t, id és vàlid i existeix un individu amb identificador id
     * \post El paràmetre implícit té el tret t i es calcula la nova intersecció de cromosomes del tret
     */
    void afegir_noutret(const string& t, int id, Cjt_Individus cji);
    
    /** @brief Modificadora que treu un nou tret al conjunt de trets
     * \pre El paràmetre implícit té el tret t, id és vàlid i existeix un individu amb identificador id
     * \post El paràmetre implícit ja no té el tret si el tenia, si no el tenia s'escriurà "error"
     */
    void treure_tret(const string& t, int id,Cjt_Individus cji);
    
    /** @brief Modificadora que reseteja els atributs del conjunt de trets quan es crida un nou experiment
     * \pre El paràmetre implícit té una serie de trets
     * \post El paràmetre implícit ja no té trets
     */
    void reset();
    
    //Consultora
    
    /** @brief Consultora que mira si el tret està a conjunt de trets
    * \pre <em>cert</em>
    * \post El resultat retorna si el tret existeix
    */
    bool te_tret(const string& t);
    
    //Escriptura
    
    /** @brief Operació d'escriptura
     * \pre <em>cert</em>
     * \post S'han escrit els atributs del paràmetre implícit en el canal estàndard de sortida
     */
    void consultar_tret(const string& t);

};
#endif
