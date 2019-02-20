import java.util.ArrayList;
/**
 * Décrivez votre classe Serveur ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class Serveur
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    private ArrayList<Client> clientList;

    /**
     * Constructeur d'objets de classe Serveur
     */
    public Serveur()
    {
        // initialisation des variables d'instance
       this.clientList =new ArrayList<Client>();
    }

   
    public boolean seConnecter(Client client)
    {
        this.clientList.add(client);
        client.seConnecter(this);
        return true;
    }
    
    public void diffuser(String msg)
    {
        for(int i=0; i<clientList.size(); i++)
        {
           clientList.get(i).recevoir(msg);
        }
    }
}
