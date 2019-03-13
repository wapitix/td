
/**
 * Décrivez votre classe Element ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public abstract class Element
{
    // variasbles d'instance - remplacez l'exemple qui suit par le vôtre
    private String nom;

    /**
     * Constructeur d'objets de classe Element
     */
    public Element(String nom)
    {
        // initialisation des variables d'instance
        this.nom=nom;
        
    }

    abstract public int getTaille();
    
    /**
     * Un exemple de méthode - remplacez ce commentaire par le vôtre
     *
     * @param  y   le paramètre de la méthode
     * @return     la somme de x et de y
     */
    public String getNom()
    {
        // Insérez votre code ici
        return this.nom;
    }
}
