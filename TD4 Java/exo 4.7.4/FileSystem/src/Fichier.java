
/**
 * Décrivez votre classe Fichier ici.
 *
super(nom); * @author SERHAN
 * @version Fevr. 2019
 */
public class Fichier extends Element
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    private int taille;

    /**
     * Constructeur d'objets de classe Fichier
     */
    public Fichier(int taille, String nom)
    {
        // initialisation des variables d'instance
        super(nom);
        this.taille = taille;
    }
    
    /**
     * Un exemple de méthode - remplacez ce commentaire par le vôtre
     *
     * @param  y   le paramètre de la méthode
     * @return     la somme de x et de y
     */
    public int getTaille()
    {
        return this.taille;
    }
}
