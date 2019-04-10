public class DnsApp()
{
    
 public static void main(String[] args){
     Dns BD = new Dns();
     DnsItem item1 = new DnsItem(new AdresseIP("192.34.0.1"), new NomMachine("nom.machine.1"));
     DnsItem item2 = new DnsItem(new AdresseIP("192.35.0.1"), new NomMachine("nom.machine.2"));
     DnsItem item3 = new DnsItem(new AdresseIP("192.36.0.1"), new NomMachine("nom.machone.3"));
     BD.DnsAdd(item1); BD.DnsAdd(item2); BD.DnsAdd(item3);
     
    }
   
    
}