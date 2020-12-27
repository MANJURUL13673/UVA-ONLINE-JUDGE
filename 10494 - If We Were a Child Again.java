package java1;
import java.util.Scanner;
import java.math.BigInteger;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String num1 = new String();
        String num2 = new String();
        char ch;
        while(input.hasNextLine()){
            num1 = input.next();
            ch = input.next().charAt(0);
            num2 = input.next();
            BigInteger value1 = new BigInteger(num1);
            BigInteger value2 = new BigInteger(num2);
            if(ch == '/'){
                System.out.println(value1.divide(value2));
            }
            else{
                System.out.println(value1.mod(value2));
            }
        }
    }
}