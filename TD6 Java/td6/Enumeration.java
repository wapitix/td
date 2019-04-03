import java.lang.String;
/**
 * Décrivez votre classe Operation ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public class Enumeration extends Eval
{
    
public enum Operation
{
    plus("+")
    {
        @Override
        public double eval(int a,int b){
            return a+b;
        }
    }
    moins("-")
    {
        @Override
        public double eval(int a,int b){
            return a-b;
        }
    }
    mult("*")
    {
        @Override
        public double eval(int a,int b){
            return a*b;
        }
    }
    div("/")
    {
        @Override
        public double eval(int a, int b){
            return a/b;
        }
    }    
}
}

