
/**
 * Décrivez votre classe Client ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class Client
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    private String nom;
    private Serveur serveur;

    /**
     * Constructeur d'objets de classe Client
     */
    public Client(String nom)
    {
        // initialisation des variables d'instance
        this.nom =nom;
    }
    
    public boolean seConnecter(Serveur serveur)
    {
        this.serveur = serveur;
        serveur.seConnecter(this);
        
        return  true;
    }
    
    public void recevoir(String msg)
    {
        System.out.println("Recepteur ("+this.nom+")"+msg);
    }
    
    public void envoyer(String msg)
    {
        if( this.serveur != null)
        {
            serveur.diffuser("Emiteur ("+this.nom+") : "+msg);
        }
    }
    
    public void setServeur(Serveur serveur)
    {
        this.serveur = serveur;
    }
}
