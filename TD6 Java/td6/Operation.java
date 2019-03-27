import java.lang.String;
/**
 * Décrivez votre classe Operation ici.
 *
 * @author (votre nom)
 * @version (un numéro de version ou une date)
 */
public enum Operation
{
    PLUS("+")
    {
        public int eval(int a,int b){
            return a+b;
        }
    }
    MOINS("-"){
        public int eval(int a,int b){
            return a-b;
        }
    }
    MULT("*"){
        public int eval(int a, int b){
            return a*b;
        }
    }
       
}
public abstract unt eval(int x, int y);

}
