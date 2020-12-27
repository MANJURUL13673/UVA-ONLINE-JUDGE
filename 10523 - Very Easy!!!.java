package java1;
import java.util.Scanner;
import java.math.BigInteger;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while(input.hasNextInt()){
            int n = input.nextInt();
            int b = input.nextInt();
            BigInteger temp1 = BigInteger.valueOf(b);
            BigInteger sum = new BigInteger("0");
            for(int i = 1; i <= n; i++){
                sum = sum.add(BigInteger.valueOf(i).multiply(temp1.pow(i)));
            }
            System.out.println(sum);
        }
    }
}