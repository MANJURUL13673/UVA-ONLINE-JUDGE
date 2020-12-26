package java1;
import java.util.Scanner;
import java.math.BigInteger;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        BigInteger sum = new BigInteger("0");
        while(true){
            String a = input.nextLine();
            BigInteger num = new BigInteger(a);
            if(a.equals("0")){
                break;
            }
            sum = sum.add(num);
        }
        System.out.println(sum);
    }
}