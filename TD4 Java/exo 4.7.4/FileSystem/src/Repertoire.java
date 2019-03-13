import java.util.ArrayList;
/**
 * Décrivez votre classe Repertoire ici.
 *
 * @author SERHAN
 * @version Fevr. 2019
 */
public class Repertoire extends Element
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    private ArrayList<Repertoire> repList;
    private ArrayList<Fichier> ficList;

    /**
     * Constructeur d'objets de classe Repertoire
     */
    public Repertoire(String nom)
    {
        super(nom);
        this.repList = new ArrayList<Repertoire>();
        this.ficList = new ArrayList<Fichier>();
    }

    /**
     * Un exemple de méthode - remplacez ce commentaire par le vôtre
     *
     * @param  rep  le répertoire que l'on souhaite ajouter
     */
    public void Ajouter(Repertoire rep)
    {
        this.repList.add(rep);
    }
    
    public void Ajouter(Fichier fic)
    {
        this.ficList.add(fic);
    }
    
    /**
     * Retourne la taille du répertoire
     * 
     *  
     * @return     la taille du dossier
     */
    
    public int getTaille()
    {
        int taille_total=0;
        for(int i=0; i<this.ficList.size(); i++)
        {
            taille_total += this.ficList.get(i).getTaille();
        }
        for(int i=0; i<this.repList.size(); i++)
        {
            taille_total += this.repList.get(i).getTaille();
        }
        return taille_total;
    }
}
