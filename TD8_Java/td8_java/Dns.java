import java.util.*;
/**
 * Décrivez votre classe Dns ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class Dns
{
    // variables d'instance - remplacez l'exemple qui suit par le vôtre
    HashMap<AdresseIP,NomMachine> ipToMachine;
    HashMap<NomMachine,AdresseIP> machineToIp;
    
    public Dns(){
        ipToMachine = new HashMap<AdresseIP,NomMachine>();
        
    }
    public void DnsAdd(DnsItem item)
    {
        ipToMachine.put(item.getAdresse(),item.getNom());
        machineToIp.put(item.getNom(),item.getAdresse());
    }
    public DnsItem getItem(Adresse ip){
        return new DnsItem(ip,ipToMachine.get(ip));
    }
    public DnsItem getItem(NomMachine nom){
        return new DnsItem(machineToIp.get(nom),nom);
    }
    
    public Collection<DnsItem> getItems(String nomDomaine){
        ArrayList<DnsItem> output = new ArrayList();
        for(NomMachine nom : ipToMachine.values()){
        }
            
         
        
        
        
        
        
         
                                          ____________
                                         /            \
                                         | COIN COIN  |
                                         \____________/
                                          o
             .   .                       o
              \ /                       o
              (")>                    (")>       <(")
           *--/ \--*        / ~~~~~~~~/_\~~~~~~~~~/_\~~~~~~~~~~~
             /___\         /  ~~   (")> ~~ ~  ~~~   ~~~ ~~ ~~~
              | |         /     ~~ /_\~~~ ~ (")> ~~ ~~~~~ ~~~ ~~ 
              L L        /  ~~~~ ~~ ~~~~~ ~~/_\ ~~~~~ ~ <(") ~~~
                        / ~~ ~~~~~~ ~~ ~~~~ ~~~~~ ~~~~ ~~/ \~~~~
              
              