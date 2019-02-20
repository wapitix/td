
/**
 * Décrivez votre classe CD ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class CD
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    private string nomArtiste;
    private int nbrTitre;

    /**
     * Constructeur d'objets de classe CD
     */
    public CD(String titre, String nomArtiste, int nbrTitre)
    {
        // initialisation des variables d'instance
        super(titre);
        this.nomArtiste = nomArtiste;
        this.nbrTitre = nbrTitre;
    }

    public string consultert()
    {
        return super.consulter()
}
