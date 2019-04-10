
/**
 * Décrivez votre classe AdresseIP ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class AdresseIP
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    String adresse;
    public AdresseIP(String adresse)
    {
        // initialisation des variables d'instance
        this.adresse=adresse;
    }
    
    @Override
    public String toString()
    {
        return adresse;
    }
}
