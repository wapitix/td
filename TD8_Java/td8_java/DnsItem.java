
/**
 * Décrivez votre classe DnsItem ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class DnsItem
{
    String adresse;
    String nom;
    
    public DnsItem(String adresse, String nom)
    {
    this.adresse= adresse;
    this.nom=nom;
    }   
    
    
    public AdresseIP getAdresse() { return adresse;}
    public NomMachine getNom() { return nom;}
    
    @Override
    public String toString(){
        return nom.toString() + "   " + adresse.toString();
    }

}
