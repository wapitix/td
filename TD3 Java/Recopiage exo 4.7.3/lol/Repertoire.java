import java.util.ArrayList;
/**
 * Décrivez votre classe Repertoire ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class Repertoire extends Element
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    private String nom;
    private ArrayList<Repertoire> repList;
    private ArrayList<Fichier> ficList;

    /**
     * Constructeur d'objets de classe Repertoire
     */
    public Repertoire(String nom)
    {
        // initialisation des variables d'instance
        this.nom=nom;
        this.repList=new ArrayList<Repertoire>();
        this.ficList=new ArrayList<Fichier>();
        
    }

}
