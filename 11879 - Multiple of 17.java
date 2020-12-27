package java1;
import java.util.Scanner;
import java.math.BigInteger;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String ch = new String();
        while(true){
            ch = input.nextLine();
            if(ch.equals("0")){
                break;
            }
            BigInteger num1 = new BigInteger(ch);
            BigInteger num2 = new BigInteger("17");
            BigInteger num3 = new BigInteger("0");
            BigInteger num4 = num1.mod(num2);
            int m = num4.compareTo(num3);
            if(m == 0){
                System.out.println("1");
            }
            else{
                System.out.println("0");
            }
        }
    }
}