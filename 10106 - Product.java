package java1;
import java.util.Scanner;
import java.math.BigInteger;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while(input.hasNextLine()){
            String a = input.nextLine();
            String b = input.nextLine();
            BigInteger x = new BigInteger(a);
            BigInteger y = new BigInteger(b);
            System.out.println(x.multiply(y));
        }
    }
}